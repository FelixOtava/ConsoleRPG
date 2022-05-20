#include "Orch.h"

Orch::Orch()
{
	name = "Black orch";
	health = 800;
	attackDamage = 280;
}

void Orch::PrintEnemyStats()
{
	std::cout << "Enemy name: " << name << " Health: " << health << " AttackDamage: " << attackDamage << std::endl;
}
