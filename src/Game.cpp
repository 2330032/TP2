#include "Game.h"

#include "Player.h"
#include "Asteroid.h"
#include "Bullet.h"
#include "Physics2D.h"

Game::Game()
{
    this->title="Asteroids";

    Player* player = new Player(CLITERAL(Vector2){0});
    Asteroid* asteroid = new Asteroid(CLITERAL(Vector2){200,100},CLITERAL(Vector2){0}, 0.0f, RED, 40.0f);

    AddObj(player);
    AddObj(asteroid);
}

Game::~Game()
{
    for (size_t i = 0; i < objects.size(); i++)
    {
        delete objects[i];
    }
    objects.clear();
}

void Game :: Update()
{
    for (size_t i = 0; i < objects.size(); i++)
    {
        objects[i]->Update(this);
    }   
    Physics2D :: Update(objects);
}

void Game :: Draw()
{
    for (size_t i = 0; i < objects.size(); i++)
    {
        objects[i]->Draw();
    }  

}

void Game::AddObj(GameObject* gob)
{
    objects.push_back(gob);
}
const int raylibKeys[(int)Key :: MAX] = 
{
KEY_A,
KEY_B,
KEY_C,
KEY_D,
KEY_E,
KEY_F,
KEY_G,
KEY_H,
KEY_I,
KEY_J,
KEY_K,
KEY_L,
KEY_M,
KEY_N,
KEY_O,
KEY_P,
KEY_Q,
KEY_R,
KEY_S,
KEY_T,
KEY_U,
KEY_V,
KEY_W,
KEY_X,
KEY_Y,
KEY_Z,
};

bool Game :: isKeyDown(Key code)
{
    return IsKeyDown(raylibKeys[(int)code]);
}