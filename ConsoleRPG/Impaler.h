#pragma once
#include "Enemy.h"
class Impaler :
    public Enemy
{
public:
    Impaler();
    inline virtual ~Impaler() {};
    void PrintEnemyStats();
};

