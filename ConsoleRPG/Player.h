#pragma once
#include <iostream>
#include <string>
class Player
{
public:
	Player();
	virtual ~Player();
	//Functions
	virtual void Attack();
	virtual void PrintStats();
	//Accesors
	inline const std::string& getPlayerName()const {return this->playerName;}
	inline const int& getHealth()const {return this->health;}
	inline const int& getAttackPower()const {return this->attackPower;}
	inline const int& getAbilityPower()const {return this->abilityPower;}
	inline const int& getDexterity()const {return this->dexterity;}
	inline const int& getIntelignce()const {return this->inteligence;}
	
	void setPlayerName(std::string name);
	void setHealth(int health);
	void setAttackPower(int attackPower);
	void setAbilityPower(int abilityPower);
	void setDexterity(int dexterity);
	void setInteligence(int inteligence);


	//Modifier
private:
	std::string playerName;
	int health;
	int attackPower;
	int abilityPower;
	int dexterity;
	int inteligence;
};

