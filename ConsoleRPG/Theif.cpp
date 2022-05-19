#include "Theif.h"

Theif::Theif()
{
	this->name = "Rei (a misery burgler and child rapist)";
	health = 1400;
	attackDamage = 60;
}


void Theif::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
