#include <iostream>
#include "application.h"

class FirstScene : public Scene
{
public:
    FirstScene() {}

    void onCreate()
    {
        newEntity(0, 0);
        newEntity(0, 0);
        newEntity(0, 0);
        newEntity(0, 0);
        newEntity(0, 0);
        newEntity(0, 0);
    }

    void onUpdate(float delta)
    {
        
    }

    void onRender(Renderer &renderer)
    {
        
    }
};

int main()
{
    Application app(800, 480, "DarkTerror Engine", new FirstScene());
    app.start(60);

    return 0;
}
