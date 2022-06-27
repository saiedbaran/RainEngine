#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace RainEngine
{
    class RE_API Log
    {
    public:
        static void init();
        
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger;}
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {return s_ClientLogger;}

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    };
}

// Core log macros
#define RE_CORE_TRACE(...)  ::RainEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RE_CORE_INFO(...)   ::RainEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RE_CORE_WARN(...)   ::RainEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RE_CORE_ERROR(...)  ::RainEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RE_CORE_FATAL(...)  ::RainEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client log macros
#define RE_TRACE(...)  ::RainEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RE_INFO(...)   ::RainEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define RE_WARN(...)   ::RainEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RE_ERROR(...)  ::RainEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define RE_FATAL(...)  ::RainEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)

