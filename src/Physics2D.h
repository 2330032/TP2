#pragma once
#include "GameObject.h"
#include <vector>

class Physics2D
{
    public:
    static void Update(const std::vector<GameObject*>& objects);
};