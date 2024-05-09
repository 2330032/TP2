#pragma once
#include "GameObject.h"
#include <vector>
#include "raylib.h"


class Player : public GameObject
{
    public: 


    //constructor
    Player(Vector2 _startPosition)
    {
        position = _startPosition;
        radius = 25.0f;
        velocity = {0,0};
        rotation = 0;
        color = RED;
        isActive = true;
    }

    void Start() override 
    {
    }
    void Update(IInput* input) override
    {
        if(input->isKeyDown(Key::D))
        {
            position.x += 1.0f;
        }
        if(input->isKeyDown(Key::S))
        {
            position.y += 1.0f;
        }
        if(input->isKeyDown(Key::A))
        {
            position.x -= 1.0f;
        }
        if(input->isKeyDown(Key::W))
        {
            position.y -= 1.0f;
        }
    }
    void Draw() override
    {
        //Draw shape
        DrawCircle(position.x,position.y, radius, GREEN);
    }
};