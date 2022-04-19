#pragma once
#include "Player.h"
class Wizard :
    public Player
{
public:
	void Attack();
	Wizard();
	inline ~Wizard() {};
	void PrintStats();
};

