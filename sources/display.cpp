#include "display.h"

Display::Display(GLuint width, GLuint height, std::string title) :
    width(width), height(height)
{
    glfwInit();

    glfwWindowHint(GLFW_SAMPLES, 0);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);

    if (!window)
        glfwTerminate();

    glfwMakeContextCurrent(window);
}

void Display::update()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}

bool Display::isCloseRequested()
{
    return (bool) glfwWindowShouldClose(window);
}
