#ifndef SCENE_H
#define SCENE_H
#include "renderer.h"
#include <iostream>
#include <vector>
#include "entity.h"

class Scene
{
private:
    std::vector<std::shared_ptr<Entity>> entities;
    
    bool created;

public:
    Scene();
    
    Entity &newEntity(float x, float y);

    void create();

    virtual void onCreate() = 0;
    virtual void onUpdate(float delta) = 0;
    virtual void onRender(Renderer &renderer) = 0;

    bool isCreated();

    ~Scene()
    {
        std::cout << "Scene destroyed" << std::endl;
    }
};

#endif // SCENE_H
