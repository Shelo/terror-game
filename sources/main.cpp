#include <iostream>
#include <OpenGL/gl.h>
#include "display.h"
#include <texture.h>
#include "vector2.h"

int main()
{
    Display display(800, 480, "Hello, World!");

    glClearColor(0, 0, 0, 0);

    Vector2 v(1, 1);
    Vector2 v2 = v.normalized();

    std::cout << (v + v2).x << std::endl;

    while (!display.isCloseRequested()) {
        glClear(GL_COLOR_BUFFER_BIT);
        display.update();
    }

    return 0;
}
