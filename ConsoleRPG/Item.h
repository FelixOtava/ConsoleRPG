#pragma once
#include<string>
#include<iostream>

class Item
{
public:
	Item();
	Item(std::string name,int AD, int AP, int DEX, int INT);
	inline virtual ~Item() {};


	inline const std::string& getItemName()const { return this->name; }
	inline const int& getAttackDamage()const { return this->attackDamage; }
	inline const int& getAttackPower()const { return this->abilityPower; }
	inline const int& getDexterity()const { return this->dexterity; }
	inline const int& getIntelignce()const { return this->intelligence; }

	void setItemName(std::string name);
	void setAD(int AD);
	void setAP(int AP);
	void setDex(int DEX);
	void setInt(int INT);

	void ItemInfo();


private:
	std::string name;
	int attackDamage;
	int abilityPower;
	int dexterity;
	int intelligence;
};

