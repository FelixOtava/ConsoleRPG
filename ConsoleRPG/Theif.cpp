#include "Theif.h"

Theif::Theif()
{
	this->name = "Rei (a misery burgler and child rapist)";
	health = 300;
	attackDamage = 35;
}


void Theif::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}