#include "Wizard.h"
int Wizard::Attack()
{
	return abilityPower + attackPower + inteligence;
}

Wizard::Wizard(std::string name)
{
	this->playerName = name;
	this->maxHealth = 300;
	this->health = 300;
	this->attackPower = 1;
	this->abilityPower = 95;
	this->dexterity = 2;
	this->inteligence = 5;
	this->level = 1;
}


void Wizard::PrintStats()
{
	std::cout << "Username: " << getPlayerName() << std::endl << "Max Health:" << getMaxHealth() << std::endl << "Health: " << getHealth() << std::endl << "Attack power: " << getAttackPower() << std::endl << "Ability power: " << getAbilityPower() << std::endl << "Dexterity: " << getDexterity() << std::endl << "Inteligence: " << getIntelignce() << std::endl << "Level: " << getLevel() << std::endl;
}


Item* Wizard::CreateWeapon()
{
	int lvl = getLevel();
	Item* staff = new Item;
	switch (lvl)
	{
	case 1:
		staff->createItem("Sirius's Staff", lvl * 1, lvl * 10, lvl * 2, lvl * 10);
		break;
	default:
		std::cout << "You have no lvl\n";
		break;
	}
	return staff;
}
Item* Wizard::CreateArmour()
{
	int lvl = getLevel();
	Item* cloat = new Item;
	switch (lvl) {
	case 1:
		cloat->createItem("Sirius Cloat", lvl * 1, lvl * 8, lvl * 2, lvl * 5);
		break;
	case 2:
		cloat->createItem("Letter gloves", lvl * 2, lvl * 5, lvl * 9, lvl * 5);
		break;
	case 3:
		cloat->createItem("Wind's wisper boots", lvl * 10, lvl * 20, lvl * 7, lvl * 26);
		break;
	case  4:
		cloat->createItem("Anatos's eye Ring", lvl * 40, lvl * 80, lvl * 40, lvl * 80);
		break;
	default:
		std::cout << "You have no lvl\n";
	}
	return cloat;
}

void Wizard::AddItem(Item* item)
{
	inventory.push_back(item);
}