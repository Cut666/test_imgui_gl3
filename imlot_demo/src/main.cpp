// Dear ImGui: standalone example application for GLFW + OpenGL 3, using programmable pipeline
// (GLFW is a cross-platform general purpose library for handling windows, inputs, OpenGL/Vulkan/Metal graphics context creation, etc.)

// Learn about Dear ImGui:
// - FAQ                  https://dearimgui.com/faq
// - Getting Started      https://dearimgui.com/getting-started
// - Documentation        https://dearimgui.com/docs (same as your local docs/ folder).
// - Introduction, links and more at the top of imgui.cpp
#include <iostream>
#include "implot.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "random"
#include <stdio.h>
#define GL_SILENCE_DEPRECATION
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h> // Will drag system OpenGL headers

// [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma.
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legacy_stdio_definitions")
#endif

// This example can also compile and run with Emscripten! See 'Makefile.emscripten' for details.
#ifdef __EMSCRIPTEN__
#include "../libs/emscripten/emscripten_mainloop_stub.h"
#endif

static void glfw_error_callback(int error, const char *description)
{
    fprintf(stderr, "GLFW Error %d: %s\n", error, description);
}
// void GenerateRandomData(float *x_data, float *y_data, int count)
// {
//     std::random_device rd;
//     std::mt19937 gen(rd());
//     std::normal_distribution<float> distribution(1.0f, 1.0f);

//     for (int i = 0; count; ++i)
//     {
//         x_data[i] = static_cast<float>(i);
//         y_data[i] = distribution(gen);
//     }
// }
// Main code
int main(int, char **)
{
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;

        // Decide GL+GLSL versions
#if defined(IMGUI_IMPL_OPENGL_ES2)
    // GL ES 2.0 + GLSL 100
    const char *glsl_version = "#version 100";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
#elif defined(__APPLE__)
    // GL 3.2 + GLSL 150
    const char *glsl_version = "#version 150";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // 3.2+ only
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);           // Required on Mac
#else
    // GL 3.0 + GLSL 130
    const char *glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    // glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // 3.0+ only
#endif

    // Create window with graphics context
    GLFWwindow *window = glfwCreateWindow(1280, 720, "Dear ImGui GLFW+OpenGL3 example", nullptr, nullptr);
    if (window == nullptr)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImPlot::CreateContext(); 
    ImGuiIO &io = ImGui::GetIO();
    (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard; // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;  // Enable Gamepad Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    // ImGui::StyleColorsLight();

    // Setup Platform/Renderer backends
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);

    io.Fonts->AddFontDefault();
    ImFont *font1 = io.Fonts->AddFontFromFileTTF("/usr/share/fonts/truetype/fonts-gujr-extra/aakar-medium.ttf", 30.0f, nullptr, io.Fonts->GetGlyphRangesVietnamese());
    ImFont *font2 = io.Fonts->AddFontFromFileTTF("/usr/share/fonts/truetype/fonts-gujr-extra/aakar-medium.ttf", 25.0f, nullptr, io.Fonts->GetGlyphRangesVietnamese());
    ImFont *font3 = io.Fonts->AddFontFromFileTTF("/usr/share/fonts/truetype/fonts-gujr-extra/aakar-medium.ttf", 20.0f, nullptr, io.Fonts->GetGlyphRangesVietnamese());
    IM_ASSERT(font1 != nullptr);
    IM_ASSERT(font2 != nullptr);
    IM_ASSERT(font3 != nullptr);

    // Our state
    /*bool show_demo_window = true;
    bool show_another_window = false;*/
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    // Main loop
#ifdef __EMSCRIPTEN__
    // For an Emscripten build we are disabling file-system access, so let's not attempt to do a fopen() of the imgui.ini file.
    // You may manually call LoadIniSettingsFromMemory() to load settings from your own storage.
    io.IniFilename = nullptr;
    EMSCRIPTEN_MAINLOOP_BEGIN
#else
    while (!glfwWindowShouldClose(window))
#endif
    {
        glfwPollEvents();

        // Start the Dear ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        /* if (show_demo_window)
             ImGui::ShowDemoWindow(&show_demo_window);*/

        // 2. Show a simple window that we create ourselves. We use a Begin/End pair to create a named window.
        //{
        //    static float f = 0.0f;
        //    static int counter = 0;

        ImGui::Begin("Graph"); // Create a window called "Hello, world!" and append into it.
        ImGui::GetStyle().Colors[ImGuiCol_WindowBg] = ImVec4(193.0f / 255.0f, 228.0f / 255.0f, 205.0f / 255.0f, 1.0f);

        // float x_data[1000];
        // float y_data[1000];
        // GenerateRandomData(x_data, y_data, 1000);

        // // Hiển thị biểu đồ đường
        // if (ImPlot::BeginPlot("My Line Plot"))
        // {
        //     ImPlot::PlotLine("My Line Plot", x_data, y_data, 1000);
        //     ImPlot::EndPlot();
        // }
         // Biểu đồ ImPlot
        if (ImPlot::BeginPlot("Gamma_ray and CAL vs DEPT", "DEPT", "Values", ImVec2(400, 300))) {
            // Dữ liệu DEPT, Gamma_ray và CAL
            double depth_data[] = {2587, 2587.5, 2588, 2588.5, 2589, 2589.5};
            double gamma_ray_data[] = {20.26, 98.702, 99.173, 99.675, 100.215, 100.796};
            double cal_data[] = {6.843, 6.941, 7.06, 7.198, 7.35, 7.512};
            int data_count = sizeof(depth_data) / sizeof(depth_data[0]);

            // Vẽ đồ thị cho Gamma_ray
            ImPlot::PlotLine("Gamma_ray", depth_data, gamma_ray_data, data_count);

            // Vẽ đồ thị cho CAL
            ImPlot::PlotLine("CAL", depth_data, cal_data, data_count);

            ImPlot::EndPlot();
        }

        ImGui::End();

        // Rendering
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);
    }
#ifdef __EMSCRIPTEN__
    EMSCRIPTEN_MAINLOOP_END;
#endif

    // Cleanup
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
