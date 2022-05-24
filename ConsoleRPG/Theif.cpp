#include "Theif.h"

Theif::Theif()
{
	this->name = "Rei";
	health = 300;
	attackDamage = 35;
}


void Theif::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name <<"(a misery burgler and child rapist)" << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
