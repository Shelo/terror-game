#include <iostream>
#include <OpenGL/gl.h>
#include "display.h"
#include <texture.h>

int main()
{
    Display display(800, 480, "Hello, World!");

    glClearColor(0, 0, 0, 0);

    Texture texture("../res/textures/bricks.jpg");

    while (!display.isCloseRequested()) {
        glClear(GL_COLOR_BUFFER_BIT);
        display.update();
    }

    return 0;
}
