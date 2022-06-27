#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace RainEngine
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
    
    void Log::init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        
        Log::s_CoreLogger = spdlog::stdout_color_mt("RainEngine");
        Log::s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("APP");
        s_ClientLogger->set_level(spdlog::level::trace);
        
    }
}
