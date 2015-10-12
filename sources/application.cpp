#include "application.h"

Application::Application(GLuint width, GLuint height, std::string title, Scene *scene) :
    scene(scene)
{
    display = std::make_shared<Display>(width, height, title);
}

void Application::start(int maxFrameRate)
{
    if (daemon)
        return;

    frameTime = 1.0f / maxFrameRate;

    daemon = true;

    mainloop();
}

void Application::mainloop()
{
    while (daemon) {
        // create the scene if it isn't created yet. Scene loaded while the application
        // is running will be created at this point as well.
        if (!scene->isCreated()) {
            scene->create();
        }

        scene->onRender(*(renderer.get()));
        display->update();

        if (display->isCloseRequested()) {
            daemon = false;
        }
    }
}
