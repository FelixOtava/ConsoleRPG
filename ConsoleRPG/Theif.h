#pragma once
#include "Enemy.h"
class Theif :
    public Enemy
{
public:
    Theif();
    inline virtual ~Theif() {};
    void PrintEnemyStats();
};

