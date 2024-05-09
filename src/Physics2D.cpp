#include "Physics2D.h"
#include "raylib.h"

// RLAPI bool CheckCollisionRecs(Rectangle rec1, Rectangle rec2);                                           // Check collision between two rectangles
// RLAPI bool CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2);

void Physics2D :: Update(const std::vector<GameObject*>& objects){
    for (size_t i = 0; i < objects.size(); i++)
    {
        GameObject* obj1 = objects[i];
        for (size_t k = 0; k < objects.size(); k++)
        {
            GameObject* obj2 = objects[k];
            if(obj1 != obj2 && CheckCollisionCircles(obj1->GetPosition(), obj1->GetRadius(),obj2->GetPosition(), obj2->GetRadius()))
            {
                obj1->OnCollisionEnter(obj2);
            }
        }
    }
}