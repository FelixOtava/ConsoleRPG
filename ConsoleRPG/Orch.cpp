#include "Orch.h"

Orch::Orch()
{
	name = "Black orch";
	health = 1500;
	attackDamage = 120;
}

void Orch::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
