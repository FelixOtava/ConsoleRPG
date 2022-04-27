#include "Warrior.h"
void Warrior::Attack()
{
}

Warrior::Warrior(std::string name)
{
	this->playerName = name;
	this->health = 200;
	this->attackPower = 35;
	this->abilityPower = 1;
	this->dexterity = 5;
	this->inteligence = 1;
}


void Warrior::PrintStats()
{
	std::cout << "Username: " << getPlayerName() << std::endl << "Health: " << getHealth() << std::endl << "Attack power: " << getAttackPower() << std::endl << "Ability power: " << getAbilityPower() << std::endl <<"Dexterity: " << getDexterity() << std::endl <<"Inteligence: " << getIntelignce() << std::endl;
}
