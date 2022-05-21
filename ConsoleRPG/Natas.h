#pragma once
#include "Enemy.h"
class Natas :
    public Enemy
{
public:
    Natas();
    inline virtual ~Natas() {};
    void PrintEnemyStats();
};

