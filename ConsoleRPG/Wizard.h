#pragma once
#include "Player.h"
class Wizard :
    public Player
{
public:
	void Attack();
	Wizard(std::string name);// foloseste un constructor ce cere un parametru username
	inline ~Wizard() {};
	void PrintStats();
};

