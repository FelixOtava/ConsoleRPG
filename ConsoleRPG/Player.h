#pragma once
#include"Item.h"
#include<vector>

class Player
{
public:
	Player();
	virtual ~Player();
	//Methodes
	virtual int Attack();
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
	inline const int& getMaxHealth() const { return this->maxHealth; }

	//Modifier
	void increaseHealth(int hp);
	void increaseAttackPower(int attack);
	void increaseAbilityPower(int ability);
	void increaseIntelligence(int intelligence);
	void increaseDexterity(int dexterity);
	void updateHealth();

	void decreaseHealth(int hp);
	void decreaseAttackPower(int attack);
	void decreaseAbilityPower(int ability);
	void decreaseIntelligence(int intelligence);
	void decreaseDexterity(int dexterity);

	void increaseLevel();
	void setPlayerName(std::string name);
	void setPlayerHealth(int health);


	void equipItem(int itemNr);
	void unequipItem(int ItemNr);
	void IncreaseStats(int index);
	void DecreaseStats(int index);
	

	

	
	

protected:
	
	std::string playerName;
	int health ;
	int maxHealth;
	int attackPower;
	int abilityPower;
	int dexterity;
	int inteligence;
	int level;
	std::vector<Item*> inventory;

};

