#pragma once
#include "GameObject.h"
#include <vector>
#include "raylib.h"

class Asteroid : public GameObject
{
    public:
    Asteroid(Vector2 _startPosition, Vector2 _startVelocity, float _startRotation, Color _color, float _radius)
    {
        position = _startPosition;
        velocity = _startVelocity;
        rotation = _startRotation;
        color = _color;
        radius = _radius;
        isActive = true;
    }

    void Start() override
    {
        //Initialization
    }
    void Update()
    {
        //Asteroid update
    }
    void Draw() override
    {
        //Draw shape
        DrawCircle(position.x,position.y, radius, color);
    }

    void OnCollisionEnter(GameObject* other)
    {
        color = BLUE;    
    }

};