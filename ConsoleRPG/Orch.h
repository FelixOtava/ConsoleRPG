#pragma once
#include "Enemy.h"
class Orch :
    public Enemy
{
public:
    Orch();
    inline virtual ~Orch() {};
    void PrintEnemyStats();
};

