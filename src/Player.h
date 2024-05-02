#pragma once
#include "GameObject.h"
#include <vector>
#include "raylib.h"


class Player : public GameObject
{
    public: 
        Vector2 position;
        Vector2 velocity;
        float rotation;
        Color color;
        bool isActive;

    //constructor
    Player(Vector2 _startPosition)
    {
        position = _startPosition;
        velocity = {0,0};
        rotation = 0;
        color = RED;
        isActive = true;
    }

    void Start() override 
    {
        //Initialization
    }
    void Update()
    {
        //Player update
    }
    void Draw()
    {
        //Draw shape
    }


};