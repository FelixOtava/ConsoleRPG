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
		CharacterCreationArt(chooseClass);
		SceneChestIntro(Scene3Travel(MainUserName));
		Item* weapon = mainCharacter->CreateWeapon();
		Item* armour = mainCharacter->CreateArmour();
		mainCharacter->AddItem(weapon);
		mainCharacter->AddItem(armour);
		mainCharacter->equipItem(1);
		mainCharacter->IncreaseStats(1);
		mainCharacter->equipItem(2);
		mainCharacter->IncreaseStats(2);
		SceneEquiping(mainCharacter);
		SceneTheCity(mainCharacter);
		FightScene(mainCharacter,GenerateEnemy(mainCharacter));
		if (RestCity(mainCharacter)) 
		{
			RestCityAccept();
			if (SceneTheForest(mainCharacter, GenerateEnemy(mainCharacter)))
			{
				
			}
			else
			{
				SceneTheForestDead(mainCharacter,GenerateEnemy(mainCharacter));
			}
		}
		else 
		{
			RestCityRefuse();
		}
		

		
	}
	else {
		if (mainCharacter == NULL) {
			std::cout << "I knew you are not brave enough\n";
		}
	}


	delete mainCharacter;
	
	
}