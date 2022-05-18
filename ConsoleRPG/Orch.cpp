#include "Orch.h"

Orch::Orch()
{
	name = "Black orch";
	health = 1200;
	attackDamage = 100;
}

void Orch::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
