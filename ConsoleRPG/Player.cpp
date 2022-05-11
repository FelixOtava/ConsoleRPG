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
	for (auto& item : inventory) {
		delete item;
	}
}
void Player::PrintStats() {
	std::cout << playerName <<"/" << health << "/" << attackPower << "/" << abilityPower << "/" << dexterity << "/" << inteligence<<std::endl;
}

void Player::setHealth(int hp)
{
	this->health += hp;
}

void Player::setAttackPower(int attack)
{
	this->attackPower += attack;
}

void Player::setAbilityPower(int ability)
{
	this->abilityPower += ability;
}

void Player::setIntelligence(int intelligence)
{
	this->inteligence += intelligence;
}

void Player::setDexterity(int dexterity)
{
	this->dexterity += dexterity;
}

void Player::setLevel()
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



void Player::setPlayerName(std::string name)
{
	this->playerName = name;
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
	if (index < 0 || index >= inventory.size()) {
		throw("OUT OF BOUNDS REMOVE ITEM INVENTORY");
	}
	delete inventory.at(index);
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



