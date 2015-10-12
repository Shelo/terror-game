#include "scene.h"

Scene::Scene()
{
    
}

Entity& Scene::newEntity(float x, float y)
{
    std::shared_ptr<Entity> entity = std::make_shared<Entity>(x, y);
    entities.push_back(std::move(entity));
    return *(entities[entities.size() - 1].get());
}

void Scene::create()
{
    created = true;
    onCreate();
}

bool Scene::isCreated()
{
    return created;
}
