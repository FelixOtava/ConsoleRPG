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
{
	for (auto& item : *inventory) {
		delete item;
	}
	delete inventory;
}
void Player::PrintStats() {
	std::cout << playerName <<"/" << health << "/" << attackPower << "/" << abilityPower << "/" << dexterity << "/" << inteligence<<std::endl;
}

void Player::setPlayerName(std::string name)
{
	this->playerName = name;
}

void Player::AddItem(Item* item)
{
	inventory->push_back(item);
}

void Player::PrintInventory()
{
	for (auto& item : *inventory) {
		item->ItemInfo();
	}
}

