#pragma once
#include "Enemy.h"
class Anatos :
    public Enemy
{
public:
    Anatos();
    inline virtual ~Anatos() {};
    void PrintEnemyStats();
};

