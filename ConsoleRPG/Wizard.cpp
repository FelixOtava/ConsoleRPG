#include "Wizard.h"
#include "Item.h"
void Wizard::Attack()
{
}

 Wizard::Wizard(std::string name)
{
	this->playerName = name;
	this->health = 100;
	this->attackPower = 1;
	this->abilityPower = 70;
	this->dexterity = 1;
	this->inteligence = 5;
	this->level = 1;
}

void Wizard::PrintStats()
{
	std::cout << "Username: " << getPlayerName() << std::endl << "Health: " << getHealth() << std::endl << "Attack power: " << getAttackPower() << std::endl << "Ability power: " << getAbilityPower() << std::endl << "Dexterity: " << getDexterity() << std::endl << "Inteligence: " << getIntelignce() << std::endl;

}


Item* Wizard::CreateWeapon()
{
	int lvl = getLevel();
	Item* staff = new Item;
	switch (lvl) 
	{
	case 1:
	staff->createItem("Sirius's Staff", lvl * 1, lvl * 10, lvl * 1, lvl * 10);
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
		cloat->createItem("Sirius Cloat", lvl * 1, lvl * 5, lvl * 1, lvl * 5);
		break;
	case 2:
		cloat->createItem("Letter gloves" ,lvl * 1, lvl * 5, lvl * 1, lvl * 5);
		break;
	case 3:
		cloat->createItem("Wind's wisper boots", lvl * 1, lvl * 5, lvl * 1, lvl * 5);
		break;
	case  4:
		cloat->createItem("Anato's eye Ring", lvl * 1, lvl * 5, lvl * 1, lvl * 5);
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






