#pragma once
#include "Player.h"
class Warrior :
    public Player
{
public:
	int Attack();
	void PrintStats();
	void AddItem(Item* item);

	Warrior(std::string name);
	inline virtual ~Warrior() {};

	Item* CreateWeapon();
	Item* CreateArmour();

};
