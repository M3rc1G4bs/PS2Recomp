#if defined(PLATFORM_SWITCH) || defined(__SWITCH__)

#include <switch.h>
#include "raylib.h"

#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>

namespace
{
    static Framebuffer s_fb;
    static bool s_fbInitialized = false;
    static void* s_linearFb = nullptr;
    static u32 s_fbStride = 0;

    static PadState s_pad;
    static bool s_padInitialized = false;

    // Guest texture tracking
    static std::vector<uint32_t> s_guestTexture;
    static int s_texWidth = 640;
    static int s_texHeight = 448;
    static bool s_hasNewFrame = false;

    static int s_targetFps = 60;
}

extern "C"
{
    void SetConfigFlags(unsigned int)
    {
    }

    void InitWindow(int width, int height, const char *title)
    {
        (void)width;
        (void)height;
        (void)title;

        // Initialize romfs if available
        romfsInit();

        // Initialize default input for Switch
        padConfigureInput(1, HidNpadStyleSet_NpadStandard);
        padInitializeAny(&s_pad);
        s_padInitialized = true;

        // Create linear 1280x720 framebuffer (native Switch screen resolution)
        Result rc = framebufferCreate(&s_fb, nwindowGetDefault(), 1280, 720, PIXEL_FORMAT_RGBA_8888, 2);
        if (R_SUCCEEDED(rc))
        {
            rc = framebufferMakeLinear(&s_fb);
            if (R_SUCCEEDED(rc))
            {
                s_fbInitialized = true;
            }
        }

        s_guestTexture.resize(640 * 512, 0);
    }

    bool WindowShouldClose(void)
    {
        return !appletMainLoop();
    }

    void CloseWindow(void)
    {
        if (s_fbInitialized)
        {
            framebufferClose(&s_fb);
            s_fbInitialized = false;
        }
        romfsExit();
    }

    bool IsWindowReady(void)
    {
        return s_fbInitialized;
    }

    int GetScreenWidth(void)
    {
        return 1280;
    }

    int GetScreenHeight(void)
    {
        return 720;
    }

    void SetTargetFPS(int fps)
    {
        s_targetFps = fps > 0 ? fps : 60;
    }

    int GetFPS(void)
    {
        return s_targetFps;
    }

    void BeginDrawing(void)
    {
        if (s_padInitialized)
        {
            padUpdate(&s_pad);
        }

        if (s_fbInitialized)
        {
            s_linearFb = framebufferBegin(&s_fb, &s_fbStride);
        }
    }

    void EndDrawing(void)
    {
        if (s_fbInitialized && s_linearFb)
        {
            framebufferEnd(&s_fb);
            s_linearFb = nullptr;
        }
    }

    void ClearBackground(Color color)
    {
        if (!s_linearFb || !s_fbInitialized)
            return;

        uint32_t c = (static_cast<uint32_t>(color.a) << 24) |
                     (static_cast<uint32_t>(color.b) << 16) |
                     (static_cast<uint32_t>(color.g) << 8)  |
                     static_cast<uint32_t>(color.r);

        uint32_t *dst = reinterpret_cast<uint32_t*>(s_linearFb);
        size_t count = (s_fbStride / 4) * 720;
        std::fill_n(dst, count, c);
    }

    Image GenImageColor(int width, int height, Color color)
    {
        Image img{};
        img.width = width;
        img.height = height;
        img.mipmaps = 1;
        img.format = 7; // RGBA
        img.data = std::malloc(width * height * 4);
        if (img.data)
        {
            uint32_t c = (static_cast<uint32_t>(color.a) << 24) |
                         (static_cast<uint32_t>(color.b) << 16) |
                         (static_cast<uint32_t>(color.g) << 8)  |
                         static_cast<uint32_t>(color.r);
            uint32_t *p = reinterpret_cast<uint32_t*>(img.data);
            std::fill_n(p, width * height, c);
        }
        return img;
    }

    void UnloadImage(Image image)
    {
        if (image.data)
        {
            std::free(image.data);
        }
    }

    Texture2D LoadTextureFromImage(Image image)
    {
        Texture2D tex{};
        tex.id = 1;
        tex.width = image.width;
        tex.height = image.height;
        tex.mipmaps = image.mipmaps;
        tex.format = image.format;
        return tex;
    }

    void UpdateTexture(Texture2D texture, const void *pixels)
    {
        if (!pixels)
            return;

        int w = texture.width > 0 ? texture.width : 640;
        int h = texture.height > 0 ? texture.height : 448;
        size_t totalPixels = static_cast<size_t>(w * h);

        if (s_guestTexture.size() < totalPixels)
        {
            s_guestTexture.resize(totalPixels);
        }
        s_texWidth = w;
        s_texHeight = h;
        std::memcpy(s_guestTexture.data(), pixels, totalPixels * 4);
        s_hasNewFrame = true;
    }

    void UnloadTexture(Texture2D)
    {
    }

    void DrawTexturePro(Texture2D, Rectangle, Rectangle, Vector2, float, Color)
    {
        if (!s_linearFb || !s_fbInitialized || s_guestTexture.empty())
            return;

        // Upscale guest frame (s_texWidth x s_texHeight, typically 640x448) to Switch 1280x720
        uint32_t *dstBase = reinterpret_cast<uint32_t*>(s_linearFb);
        const uint32_t *srcBase = s_guestTexture.data();
        const int strideDwords = static_cast<int>(s_fbStride / 4);

        const int sw = s_texWidth;
        const int sh = s_texHeight;

        for (int y = 0; y < 720; ++y)
        {
            int srcY = (y * sh) / 720;
            const uint32_t *srcRow = srcBase + srcY * sw;
            uint32_t *dstRow = dstBase + y * strideDwords;

            for (int x = 0; x < 1280; x += 2)
            {
                int srcX = x / 2;
                if (srcX >= sw) srcX = sw - 1;
                uint32_t px = srcRow[srcX];
                dstRow[x] = px;
                dstRow[x + 1] = px;
            }
        }
    }

    void InitAudioDevice(void) {}
    void CloseAudioDevice(void) {}
    bool IsAudioDeviceReady(void) { return false; }

    Wave LoadWaveFromMemory(const char*, const unsigned char*, int) { return Wave{}; }
    void UnloadWave(Wave) {}
    Sound LoadSoundFromWave(Wave) { return Sound{}; }
    void UnloadSound(Sound) {}
    void PlaySound(Sound) {}
    void StopSound(Sound) {}
    bool IsSoundPlaying(Sound) { return false; }
    void SetSoundPitch(Sound, float) {}
    void SetSoundVolume(Sound, float) {}

    bool IsGamepadAvailable(int gamepad)
    {
        return gamepad == 0 && s_padInitialized;
    }

    bool IsGamepadButtonDown(int gamepad, int button)
    {
        if (gamepad != 0 || !s_padInitialized)
            return false;

        u64 cur = padGetButtons(&s_pad);

        switch (button)
        {
        case GAMEPAD_BUTTON_LEFT_FACE_UP:    return (cur & HidNpadButton_Up) != 0;
        case GAMEPAD_BUTTON_LEFT_FACE_DOWN:  return (cur & HidNpadButton_Down) != 0;
        case GAMEPAD_BUTTON_LEFT_FACE_LEFT:  return (cur & HidNpadButton_Left) != 0;
        case GAMEPAD_BUTTON_LEFT_FACE_RIGHT: return (cur & HidNpadButton_Right) != 0;

        case GAMEPAD_BUTTON_RIGHT_FACE_DOWN: return (cur & HidNpadButton_B) != 0; // Cross
        case GAMEPAD_BUTTON_RIGHT_FACE_RIGHT:return (cur & HidNpadButton_A) != 0; // Circle
        case GAMEPAD_BUTTON_RIGHT_FACE_LEFT: return (cur & HidNpadButton_Y) != 0; // Square
        case GAMEPAD_BUTTON_RIGHT_FACE_UP:   return (cur & HidNpadButton_X) != 0; // Triangle

        case GAMEPAD_BUTTON_LEFT_TRIGGER_1:  return (cur & HidNpadButton_L) != 0;
        case GAMEPAD_BUTTON_RIGHT_TRIGGER_1: return (cur & HidNpadButton_R) != 0;
        case GAMEPAD_BUTTON_LEFT_TRIGGER_2:  return (cur & HidNpadButton_ZL) != 0;
        case GAMEPAD_BUTTON_RIGHT_TRIGGER_2: return (cur & HidNpadButton_ZR) != 0;

        case GAMEPAD_BUTTON_MIDDLE_LEFT:     return (cur & HidNpadButton_Minus) != 0; // Select
        case GAMEPAD_BUTTON_MIDDLE_RIGHT:    return (cur & HidNpadButton_Plus) != 0;  // Start
        case GAMEPAD_BUTTON_LEFT_THUMB:      return (cur & HidNpadButton_StickL) != 0;
        case GAMEPAD_BUTTON_RIGHT_THUMB:     return (cur & HidNpadButton_StickR) != 0;
        default: return false;
        }
    }

    float GetGamepadAxisMovement(int gamepad, int axis)
    {
        if (gamepad != 0 || !s_padInitialized)
            return 0.0f;

        switch (axis)
        {
        case GAMEPAD_AXIS_LEFT_X:
            return static_cast<float>(s_pad.sticks[0].x) / 32767.0f;
        case GAMEPAD_AXIS_LEFT_Y:
            return -static_cast<float>(s_pad.sticks[0].y) / 32767.0f;
        case GAMEPAD_AXIS_RIGHT_X:
            return static_cast<float>(s_pad.sticks[1].x) / 32767.0f;
        case GAMEPAD_AXIS_RIGHT_Y:
            return -static_cast<float>(s_pad.sticks[1].y) / 32767.0f;
        default:
            return 0.0f;
        }
    }

    bool IsKeyDown(int)
    {
        return false;
    }

    bool IsKeyPressed(int)
    {
        return false;
    }
}

#endif // PLATFORM_SWITCH
