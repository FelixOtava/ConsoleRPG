#include "Anatos.h"

Anatos::Anatos()
{
	name = "Anatos";
	health = 15000;
	attackDamage = 300;
}

void Anatos::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
