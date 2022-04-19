#include"Warrior.h"
#include "Wizard.h"
int main()
{
	Player* test = new Wizard;
	Player* test1 = new Warrior;
	test->PrintStats();
	test1->PrintStats();
	delete test;
	delete test1;
}