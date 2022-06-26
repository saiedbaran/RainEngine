#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern RainEngine::Application* RainEngine::CreateApplication();

int main(int argc, char** argv)
{
    auto app = RainEngine::CreateApplication();
    printf("Initialize App: \n");
    app->Run();
    delete app;
}
#endif