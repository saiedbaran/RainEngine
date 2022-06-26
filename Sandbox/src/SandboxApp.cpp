#include "RainEngine.h"

class Sandbox : public RainEngine::Application
{
public:
    Sandbox()
    {
        
    }

    ~Sandbox()
    {
        
    }
    
};

RainEngine::Application* RainEngine::CreateApplication()
{
    return new Sandbox();
}
