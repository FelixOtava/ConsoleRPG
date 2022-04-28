#include "Item.h"

Item::Item()
{
	name = "NONE";
	attackDamage = 0;
	abilityPower = 0;
	dexterity = 0;
	intelligence = 0;
}

Item::Item(std::string name, int AD, int AP, int DEX, int INT)
{
	this ->name = name;
	attackDamage = AD;
	abilityPower = AP;
	dexterity = DEX;
	intelligence = INT;
}

void Item::setItemName(std::string name)
{
	this->name = name;
}
void Item::setAD(int AD)
{
	attackDamage = AD;
}

void Item::setAP(int AP)
{
	abilityPower = AP;
}

void Item::setDex(int DEX)
{
	dexterity = DEX;
}

void Item::setInt(int INT)
{
	intelligence = INT;
}

void Item::ItemInfo()
{
	std::cout << "Name: " << name << "//AttackDamage: " << attackDamage << "//AbilityPower: " << abilityPower << "//Dexterity: " << dexterity << "//Intelligence: " << intelligence << std::endl;
}
