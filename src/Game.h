#pragma once
#include <vector>
#include "GameObject.h"
#include "IInput.h"

class Game : public IInput{
    std::vector<GameObject*> objects;
    const char* title;
    public:
        Game();
        ~Game();
        virtual bool isKeyDown(Key code) override;
        void Update();
        void Draw();
        void AddObj(GameObject* gob);
        inline const char* GetTitle(){return title;};
};