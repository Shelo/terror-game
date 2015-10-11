#include "texture.h"
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

Texture::Texture(std::string path)
{
    int components;
    GLvoid* data = stbi_load(path.c_str(), &width, &height, &components, 4);

    if (data == NULL) {
        std::cerr << "Error loading texture: " << path << std::endl;
        exit(1);
    }

    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);

    // repeat.
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    // set filter to nearest.
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);

    stbi_image_free(data);
}

int Texture::getWidth() const
{
    return width;
}

int Texture::getHeight() const
{
    return height;
}
