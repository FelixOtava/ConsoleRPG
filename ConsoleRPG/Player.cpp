#include "Player.h"

int Player::Attack()
{
	std::cout << "Just in case\n";
	return 1;
}
Player::Player() {
	this->playerName = "Username";
	this->maxHealth = 0;
	this->health = 0;
	this->attackPower = 0;
	this->abilityPower = 0;
	this->dexterity = 0;
	this->inteligence = 0;
}
Player::~Player()
{
	for (auto& item : inventory) {
		delete item;
	}
}
void Player::PrintStats() {
	std::cout << playerName <<"/" << health << "/" << attackPower << "/" << abilityPower << "/" << dexterity << "/" << inteligence << std::endl;
}

void Player::increaseHealth(int hp)
{
	this->maxHealth *= hp;
}

void Player::increaseAttackPower(int attack)
{
	this->attackPower += attack;
}

void Player::increaseAbilityPower(int ability)
{
	this->abilityPower += ability;
}

void Player::increaseIntelligence(int intelligence)
{
	this->inteligence += intelligence;
}

void Player::increaseDexterity(int dexterity)
{
	this->dexterity += dexterity;
}

void Player::updateHealth()
{
	health = maxHealth;
}

void Player::decreaseHealth(int hp)
{
	this->maxHealth /= hp;
}

void Player::decreaseAttackPower(int attack)
{
	this->attackPower -= attack;
}

void Player::decreaseAbilityPower(int ability)
{
	this->abilityPower -= ability;
}

void Player::decreaseIntelligence(int intelligence)
{
	this->inteligence -= intelligence;
}

void Player::decreaseDexterity(int dexterity)
{
	this->dexterity -= dexterity;
}

void Player::increaseLevel()
{
	level++;
}

void Player::equipItem(int itemNr) 
{
	if (itemNr > inventory.size())
		std::cout<<"Out of inventory bounds\n";
	else
	inventory[itemNr-1]->equiped = true;
}
void Player::unequipItem(int itemNr)
{
	if (itemNr > inventory.size())
		std::cout << "Out of inventory bounds\n";
	else
	inventory[itemNr-1]->equiped = false;
}

void Player::IncreaseStats(int index)
{
	if (index > inventory.size()|| index<=0) {
		std::cout << "OUT OF INVENTORY BOUND\n";
	}
	auto item = inventory.at(index-1);
	increaseAttackPower(item->getAD());
	increaseAbilityPower(item->getAP());
	increaseDexterity(item->getDex());
	increaseIntelligence(item->getInte());
	increaseHealth(item->getDex());
	updateHealth();
}

void Player::DecreaseStats(int index)
{
	if (index > inventory.size() || index <= 0) {
		std::cout << "OUT OF INVENTORY BOUND\n";
	}
	auto item = inventory.at(index-1);
	decreaseAttackPower(item->getAD());
	decreaseAbilityPower(item->getAP());
	decreaseDexterity(item->getDex());
	decreaseIntelligence(item->getInte());
	decreaseHealth(item->getDex());
	updateHealth();
}



void Player::setPlayerName(std::string name)
{
	this->playerName = name;
}

void Player::setPlayerHealth(int health)
{
	this->health = health;
}

void Player::AddItem(Item* item)
{
	inventory.push_back(item);
}

void Player::PrintInventory()
{
	for (auto& item : inventory) {
		item->ItemInfo();
	}
}
void Player::RemoveItem(int index) {
	if (index < 0 || index > inventory.size()) {
		std::cout<<"OUT OF BOUNDS REMOVE ITEM INVENTORY";
	}
	inventory.erase(std::remove(inventory.begin(), inventory.end(), inventory.at(index - 1)), inventory.end());
 }

Item* Player::CreateWeapon()
{
	Item* weapon = new Item;
	return weapon;
}

Item* Player::CreateArmour()
{
	Item* armour = new Item;
	return armour;
}



