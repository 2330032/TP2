#include "entrypoint.h"
#include <stdio.h>
#include "raylib.h"


void raylib_start(void){
    
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Asteroids");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Game logic

        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw game objects

        EndDrawing();
    }

    // Clean up
    CloseWindow();

}