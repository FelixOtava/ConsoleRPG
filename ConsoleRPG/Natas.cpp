#include "Natas.h"

Natas::Natas()
{
	name = "Natas";
	health = 3000000;
	attackDamage = 1600;
}

void Natas::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}