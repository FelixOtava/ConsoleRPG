#pragma once
#include "Player.h"
class Wizard :
	public Player
{
public:
	int Attack();
	void PrintStats();
	void AddItem(Item* item);

	Wizard(std::string name);
	inline virtual ~Wizard() {};

	Item* CreateWeapon();
	Item* CreateArmour();
};

