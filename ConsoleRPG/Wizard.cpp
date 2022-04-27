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
	std::cout << "Username: " << getPlayerName() << std::endl << "Health: " << getHealth() << std::endl << "Attack power: " << getAttackPower() << std::endl << "Ability power: " << getAbilityPower() << std::endl << "Dexterity: " << getDexterity() << std::endl << "Inteligence: " << getIntelignce() << std::endl;

}
