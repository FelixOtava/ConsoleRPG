#pragma once
#include "Player.h"
class Warrior :
    public Player
{
public:
	void Attack();
	Warrior(std::string name); // foloseste un constructor ce cere un parametru username
	inline virtual ~Warrior() {};
	void PrintStats();

};
