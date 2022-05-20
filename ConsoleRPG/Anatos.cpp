#include "Anatos.h"

Anatos::Anatos()
{
	name = "Anatos";
	health = 31180;
	attackDamage = 270;
}

void Anatos::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
