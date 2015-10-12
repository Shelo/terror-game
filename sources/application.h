#ifndef CORE_H
#define CORE_H
#include <iostream>
#include <memory>
#include "scene.h"
#include "display.h"

class Application
{
private:
    std::shared_ptr<Scene> scene;
    std::shared_ptr<Display> display;
    std::unique_ptr<Renderer> renderer;

    float frameTime;
    bool daemon = false;

    void mainloop();

public:
    Application(GLuint width, GLuint height, std::string title, Scene *scene);
    
    void start(int maxFrameRate);
    
    ~Application()
    {
        std::cout << "Application destroyed." << std::endl;
    }
};

#endif // CORE_H
