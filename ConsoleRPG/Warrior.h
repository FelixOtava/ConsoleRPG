#pragma once
#include "Player.h"
class Warrior :
    public Player
{
public:
	void Attack();
	Warrior();
	inline ~Warrior() {};
	void PrintStats();

};
