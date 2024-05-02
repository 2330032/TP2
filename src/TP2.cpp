#include "entrypoint.h"
#include <stdio.h>
#include "raylib.h"
#include "GameObject.h"
#include "Player.h"
#include "Asteroid.h"
#include "Bullet.h"




void raylib_start(void){
    
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Asteroids");

    Player player ({screenWidth/2, screenHeight/2});

    std::vector<Asteroid> asteroids;
    std::vector<Bullet> bullets;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
       player.Update();
       




        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw game objects

        EndDrawing();
    }

    // Clean up
    CloseWindow();

}