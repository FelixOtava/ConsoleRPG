#pragma once
#include "Player.h"

class Warrior :
    public Player
{
public:
	void Attack();
	void PrintStats();
	void AddItem(Item* item);
	Warrior(std::string name);
	inline virtual ~Warrior() {};
	Item* CreateWeapon();
	Item* CreateArmour();

};
