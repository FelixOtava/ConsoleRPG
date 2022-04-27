#include "FUNCTIONS_SCENE.h"
#include"Warrior.h"
#include"Wizard.h"
int main()
{

	if (IntroScene1()) {
		std::string MainUserName = IntroScene2();
		int chooseClass = IntroScene3(MainUserName);
		switch (chooseClass) {
		case 1:
			Player* mainCharacter = new Warrior(MainUserName);
			break;

		case 2:
			Player* mainCharacter = new Wizard(MainUserName);
			break;
		}
		
	}
	else {
		std::cout << "I knew you are not brave enough\n";
	}
	
}