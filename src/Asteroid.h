#pragma once
#include "GameObject.h"
#include <vector>
#include "raylib.h"

class Asteroid : public GameObject
{
    public:
                Vector2 position;
        Vector2 velocity;
        float rotation;
        Color color;
        float radius;
        bool isActive;

    //constructor
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
    void Draw()
    {
        //Draw shape
    }

};