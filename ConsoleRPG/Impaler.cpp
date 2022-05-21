#include "Impaler.h"

Impaler::Impaler()
{
	name = "Vlad the Impaler";
	health = 1500000;
	attackDamage = 1800;
}

void Impaler::PrintEnemyStats()
{
		std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
