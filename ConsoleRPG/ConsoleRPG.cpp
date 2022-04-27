#include "FUNCTIONS_SCENE.h"
#include"Warrior.h"
#include"Wizard.h"
int main()
{
	Player* mainCharacter = NULL;
	if (IntroScene1()) {
		std::string MainUserName = IntroScene2();
		int chooseClass = IntroScene3(MainUserName);
		switch (chooseClass) {
		case 1:
			mainCharacter = new Warrior(MainUserName);
			break;

		case 2:
			mainCharacter = new Wizard(MainUserName);
			break;
		}
		CharacterCreation(chooseClass);
	}
	else {
		if (mainCharacter == NULL) {
			std::cout << "I knew you are not brave enough\n";
		}
	}
	delete mainCharacter;
}