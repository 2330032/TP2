#include "entrypoint.h"
#include <stdio.h>
#include "raylib.h"
#include "Game.h"




void raylib_start(void){
    
    Game game = Game();
   
    //To do: change to be defined in Game constructor
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight,game.GetTitle());


    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        game.Update();

        BeginDrawing();

        ClearBackground(RAYWHITE);

        game.Draw();

        EndDrawing();
    }

    // Clean up
    CloseWindow();

}