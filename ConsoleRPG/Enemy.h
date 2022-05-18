#pragma once
#include <iostream>
#include <string>
class Enemy
{
public:
	Enemy();
	Enemy(std::string name);
	inline virtual ~Enemy() {};

	//Methodes
	virtual void PrintEnemyStats();
	inline void EnemyAttack() {};

	//Accesors
	inline const std::string& getEnemyName()const { return this->name; }
	inline const int& getHealth()const { return this->health; }
	inline const int& getAttackPower()const { return this->attackDamage; }
	

	//Modifier
	void setHealth(int health);
	void setAttackDamage(int attackDamage);
	void setEnemyName(std::string name);


protected:
	int health;
	int attackDamage;
	std::string name;
};

