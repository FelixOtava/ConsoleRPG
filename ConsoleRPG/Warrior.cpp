#include "Warrior.h"
void Warrior::Attack()
{
}

void Warrior::NewWar(std::string name)
{
	setPlayerName(name);
	setHealth(100);
	setAttackPower(8);
	setAbilityPower(1);
	setDexterity(2);
	setInteligence(1);
}

void Warrior::PrintStats()
{
	std::cout << getPlayerName() << getHealth() << getAttackPower() << getAbilityPower() << getDexterity() << getIntelignce();
}
