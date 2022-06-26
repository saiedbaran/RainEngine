#pragma once

#include "Core.h"

namespace RainEngine
{
    class RE_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // to be defined in CLIENT
    Application* CreateApplication();
}


