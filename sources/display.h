#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#define GLFW_DLL
#include <GLFW/glfw3.h>


class Display
{
public:
    Display(GLuint width, GLuint height, std::string title);
    void update();
    bool isCloseRequested();

    GLuint getWidth()
    {
        return width;
    }

    GLuint getHeight()
    {
        return height;
    }

    ~Display()
    {
        std::cout << "Display destroyed" << std::endl;
    }

private:
    GLuint width;
    GLuint height;
    GLFWwindow *window;
};

#endif // DISPLAY_H
