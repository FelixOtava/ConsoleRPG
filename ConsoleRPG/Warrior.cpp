#include "Warrior.h"
void Warrior::Attack()
{
}

Warrior::Warrior(std::string name)
{
	this->playerName = name;
	this->health = 200;
	this->attackPower = 35;
	this->abilityPower = 1;
	this->dexterity = 5;
	this->inteligence = 1;
	this->level = 1;
}


void Warrior::PrintStats()
{
	std::cout << "Username: " << getPlayerName() << std::endl << "Health: " << getHealth() << std::endl << "Attack power: " << getAttackPower() << std::endl << "Ability power: " << getAbilityPower() << std::endl <<"Dexterity: " << getDexterity() << std::endl <<"Inteligence: " << getIntelignce() << std::endl;
}

Item* Warrior::CreateWeapon()
{
	int lvl = getLevel();
	Item* sword = new Item;
	switch (lvl)
	{
	case 1:
		sword->createItem("Dante's Sword", lvl * 10, lvl * 1, lvl * 3, lvl * 1);
		break;
	default:
		std::cout << "You have no lvl\n";
		break;
	}
	return sword;
	
}

Item* Warrior::CreateArmour()
{
	int lvl = getLevel();
	Item* armour = new Item;
	switch (lvl) {
	case 1:
		armour->createItem("Dante's Helmet", lvl * 10, lvl * 1, lvl * 2, lvl * 1);
		break;
	case 2:
		armour->createItem("Moonlight Plate", lvl * 10, lvl * 1, lvl * 2, lvl * 1);
		break;
	case 3:
		armour->createItem("MorningStar Shield ", lvl * 10, lvl * 1, lvl * 2, lvl * 1);
		break; 
	case 4 :
		armour->createItem("Anatos tooth Necklace ", lvl * 10, lvl * 1, lvl * 2, lvl * 1);
		break;
	default:
		std::cout << "You have no lvl\n";
		break;
	}
	return armour;
}

void Warrior::AddItem(Item* item)
{
	inventory.push_back(item);
}
