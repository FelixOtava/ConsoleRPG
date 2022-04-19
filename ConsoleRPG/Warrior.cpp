#include "Warrior.h"
void Warrior::Attack()
{
}

Warrior::Warrior()
{
	this->playerName = "War";
	this->health = 200;
	this->attackPower = 35;
	this->abilityPower = 1;
	this->dexterity = 5;
	this->inteligence = 1;
}


void Warrior::PrintStats()
{
	std::cout << getPlayerName()<<"/" << getHealth() << "/" << getAttackPower() << "/" << getAbilityPower() << "/" << getDexterity() << "/" << getIntelignce()<<std::endl;
}
