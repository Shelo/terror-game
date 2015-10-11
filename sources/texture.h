#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include <OpenGL/gl.h>

class Texture
{
private:
    GLsizei width;
    GLsizei height;
    GLuint texture;

public:
    Texture(std::string path);
};

#endif // TEXTURE_H
