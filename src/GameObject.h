#pragma once
#include "raylib.h"
#include "IInput.h"

class GameObject {
    protected:
        virtual void Start(){};  
        Vector2 position;
        Vector2 velocity;
        float rotation;
        Color color;
        float radius;
        bool isActive;
    public:
        virtual void Update(IInput* input){};
        virtual void Draw(){};
        virtual void OnCollisionEnter(GameObject* other){};
        Vector2 GetPosition(){return position;};
        float GetRadius(){return radius;};
        virtual ~GameObject() = default;

    
   
};