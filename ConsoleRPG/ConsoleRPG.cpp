#include "FUNCTIONS_SCENE.h"
#include"Warrior.h"
#include"Wizard.h"
#include "Impaler.h"

int main()
{
	Player* mainCharacter = NULL;
	if (IntroScene1()) {
		std::string MainUserName = IntroScene2();
		switch (IntroScene3(MainUserName))
		{
		case 1:
			mainCharacter = new Warrior(MainUserName);
			CharacterCreationArt(1);
			break;

		case 2:
			mainCharacter = new Wizard(MainUserName);
			CharacterCreationArt(2);
			break;
		}
		SceneChestIntro(Scene3Travel(MainUserName));
		mainCharacter->AddItem(mainCharacter->CreateWeapon());
		mainCharacter->AddItem(mainCharacter->CreateArmour());
		SceneEquiping(mainCharacter);
		SceneTheCity(mainCharacter,GenerateEnemy(mainCharacter));
		FightSceneThief(mainCharacter,GenerateEnemy(mainCharacter));
		if (RestCity(mainCharacter)) 
		{
			RestCityAccept();
			if (SceneTheForest(mainCharacter, GenerateEnemy(mainCharacter)))
			{
				SceneForestAfterBattle(mainCharacter);
			}
			else 
			{
				SceneTheForestDead(mainCharacter, GenerateEnemy(mainCharacter));
			}
		}
		else 
		{
			RestCityRefuse();
		}
		SceneMountains(mainCharacter, GenerateEnemy(mainCharacter));
		SceneMountainsVictory(mainCharacter);
		SceneNatas(mainCharacter);
		Enemy* sideCharacter = new Impaler();
		SceneFinalFight();
		EndGameFight(mainCharacter, GenerateEnemy(mainCharacter), sideCharacter);
		EndGame();
	}
	else {
		if (mainCharacter == NULL) {
			std::cout << "I knew you are not brave enough\n";
		}
	}

	delete mainCharacter;
	
	
}