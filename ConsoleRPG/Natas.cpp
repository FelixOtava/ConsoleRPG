#include "Natas.h"

Natas::Natas()
{
	name = "Natas";
	health = 150000;
	attackDamage = 1000;
}

void Natas::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}