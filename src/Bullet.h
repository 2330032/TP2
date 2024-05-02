#pragma once
#include "GameObject.h"
#include <vector>
#include "raylib.h"

class Bullet : public GameObject
{
    public:
        Vector2 position;
        Vector2 velocity;
        Color color;
        float radius;
        bool isActive;

    //constructor
    Bullet(Vector2 _startPosition, Vector2 _startVelocity, Color _color, float _radius)
    {
        position = _startPosition;
        velocity = _startVelocity;
        color = _color;
        radius = _radius;
        isActive = false;
    }

    void Start() override
    {
        //Initialization

    }
    void Update()
    {
        //*Bullet update*//
        
        //If (key.space), isActive = true

        //If isActive == true, 
        //position.x += velocity.x
        //position.y += velocity.y

        //     if (position.x < 0 || position.x > GetScreenWidth() || position.y < 0 || position.y > GetScreenHeight())
        // {
        //     isActive = false;
        // }

    }
    void Draw()
    { 
        //Draw shape
    }
};