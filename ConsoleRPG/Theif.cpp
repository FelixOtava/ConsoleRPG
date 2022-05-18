#include "Theif.h"

Theif::Theif(std::string name)
{
	this->name = name;
	health = 300;
	attackDamage = 50;
}


void Theif::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
