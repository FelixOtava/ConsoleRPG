#include "Player.h"

void Player::Attack()
{}
Player::Player() {
	this->playerName = "Username";
	this->health = 0;
	this->attackPower = 0;
	this->abilityPower = 0;
	this->dexterity = 0;
	this->inteligence = 0;
}
Player::~Player()
{}
void Player::PrintStats() {
	std::cout << playerName <<"/" << health << "/" << attackPower << "/" << abilityPower << "/" << dexterity << "/" << inteligence<<std::endl;
}

void Player::setPlayerName(std::string name)
{
	this->playerName = name;
}

void Player::setHealth(int health)
{
	this->health = health;
}

void Player::setAttackPower(int attackPower)
{
	this->attackPower = attackPower;
}

void Player::setAbilityPower(int abilityPower)
{
	this->abilityPower = abilityPower;
}

void Player::setDexterity(int dexterity)
{
	this->dexterity = dexterity;
}

void Player::setInteligence(int inteligence)
{
	this->inteligence = inteligence;
}

