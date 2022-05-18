#include "Enemy.h"

Enemy::Enemy()
{
	name = "None";
	health = 0;
	attackDamage = 0;
}

Enemy::Enemy(std::string name)
{
	this->name = name;
	health = 0;
	attackDamage = 0;
}

void Enemy::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}

void Enemy::setHealth(int health)
{
	this->health = health;
}

void Enemy::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}

void Enemy::setEnemyName(std::string name)
{
	this->name = name;
}
