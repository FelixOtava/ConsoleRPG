#include "Player.h"
class Warrior :
    public Player
{
public:
	void Attack();
	void NewWar(std::string name);
	void PrintStats();

};
