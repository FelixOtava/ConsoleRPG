#pragma once
#include "FUNCTIONS_SCENE.h"
#include"Item.h"
#include<vector>

class Player
{
public:
	Player();
	virtual ~Player();
	//Methodes
	virtual void Attack();
	virtual void PrintStats();
	virtual void AddItem(Item* item);
	void PrintInventory();
	void RemoveItem(int index);
	virtual Item* CreateWeapon();
	virtual Item* CreateArmour();
	

	//Accesors
	inline const std::string& getPlayerName()const { return this->playerName; }
	inline const int& getHealth()const {return this->health;}
	inline const int& getAttackPower()const {return this->attackPower;}
	inline const int& getAbilityPower()const {return this->abilityPower;}
	inline const int& getDexterity()const {return this->dexterity;}
	inline const int& getIntelignce()const {return this->inteligence;}
	inline const int& getLevel()const {return this->level;}

	void setHealth(int hp);
	void setAttackPower(int attack);
	void setAbilityPower(int ability);
	void setIntelligence(int intelligence);
	void setDexterity(int dexterity);
	void setLevel();

	void equipItem(int itemNr);
	void unequipItem(int ItemNr);
	void UpdateStats();
	

	//Modifier
	void setPlayerName(std::string name);

	
	

protected:
	std::string playerName;
	int health ;
	int attackPower;
	int abilityPower;
	int dexterity;
	int inteligence;
	int level;
	std::vector<Item*> inventory;

};

