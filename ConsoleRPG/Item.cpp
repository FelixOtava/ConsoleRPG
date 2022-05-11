#include "Item.h"

Item::Item()
{
	name = "NONE";
	ad = 0;
	ap = 0;
	dex = 0;
	inte = 0;
}

void Item::createItem(std::string name,int AD, int AP, int Dex, int Int)
{
	this->name = name;
	ad = AD;
	ap = AP;
	dex = Dex;
	inte = Int;
}


void Item::setItemName(std::string name)
{
	this->name = name;
}
void Item::setAD(int AD)
{
	ad = AD;
}

void Item::setAP(int AP)
{
	ap = AP;
}

void Item::setDex(int DEX)
{
	dex = DEX;
}

void Item::setInt(int INT)
{
	inte = INT;
}

void Item::ItemInfo()
{
	std::string equip;
	if (equiped == true)
		equip = "Yes";
	else
		equip = "No";
	std::cout << "Name: " << name << " //AttackDamage: " << ad << " //AbilityPower: " << ap << " //Dexterity: " << dex << " //Intelligence: " << inte<<" //Equiped: "<<equip << std::endl;
}
