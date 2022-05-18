#pragma once
#include "Enemy.h"
class Theif :
    public Enemy
{
public:
    Theif(std::string name);
    inline virtual ~Theif() {};
    void PrintEnemyStats();
    inline void EnemyAttack() {};

};

