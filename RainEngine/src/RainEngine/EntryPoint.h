#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern RainEngine::Application* RainEngine::CreateApplication();

int main(int argc, char** argv)
{
    RainEngine::Log::init();
    RE_CORE_WARN("Core Debugger Initialized!");
    RE_INFO("Client Debugger Initialized!");
    
    auto app = RainEngine::CreateApplication();
    app->Run();
    delete app;
}
#endif