#include <iostream>
#include <memory>
#include <OpenGL/gl.h>
#include "display.h"

int main()
{
    Display display(800, 480, "Hello, World!");

    glClearColor(0, 0, 0, 0);

    while (!display.isCloseRequested()) {
        glClear(GL_COLOR_BUFFER_BIT);
        display.update();
    }

    return 0;
}
