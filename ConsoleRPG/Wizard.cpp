#include "Wizard.h"

void Wizard::Attack()
{
}

 Wizard::Wizard(std::string name)
{
	this->playerName = name;
	this->health = 100;
	this->attackPower = 1;
	this->abilityPower = 70;
	this->dexterity = 1;
	this->inteligence = 5;
}

void Wizard::PrintStats()
{
	std::cout << getPlayerName() << "/" << getHealth() << "/" << getAttackPower() << "/" << getAbilityPower() << "/" << getDexterity() << "/" << getIntelignce() << std::endl;
}
