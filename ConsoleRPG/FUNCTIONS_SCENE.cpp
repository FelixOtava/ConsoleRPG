#include "FUNCTIONS_SCENE.h"

void FightScene(Player* player, Enemy* enemy)
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("BattleFinal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
	int playerAttack, enemyAttack, playerHealth, enemyHealth;
	playerAttack = player->Attack();
	enemyAttack = enemy->Attack();
	playerHealth = player->getHealth();
	enemyHealth = enemy->getHealth();
	do
	{
		enemyHealth -= playerAttack;
		std::cout << "Enemy's health after you have attacked: " << enemyHealth << std::endl;
		Sleep(200);
		if (enemyHealth <= 0)
			break;
		playerHealth -= enemyAttack;
		std::cout << "Your health after Enemy have attacked: " << playerHealth << std::endl;
		Sleep(200);
		if (playerHealth <= 0)
			break;
	} while (enemyHealth >= 0 || playerHealth >= 0);
	if (enemyHealth < playerHealth)
	{
		std::cout << "You Won\n";
		player->setPlayerHealth(playerHealth);
		player->increaseLevel();
	}
	else {
	std::cout << "You Lose\n";
	deadArt();
	}
	std::cout << "Press any key to continue...\n";
	delete enemy;
	std::string random;
	std::cin.ignore();
	std::cin >> random;
}

void crossroad()
{
	std::cout<<"Reached the crossroads again, the DemiGod, have to choose another way\n"
		"The left one leads to BurkPalace, a town well known for its coruption and high crime rate.\n"
		"The middle one leads to The Carpathian Mountains, in this mountains Anatos and his horde of vampires are rumored to be ghosting around.\n"
		"And the last road leads to The Forest of the Hanged, called like this for obvious reasons.\n"
		"Choose your path : 1 or 2 or 3... ";
}

void deadArt()
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("EndSong.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
	std::cout<<"        _.---,._,'\n"
		"      /' _.--.<\n"
		"        /'     `'\n"
		"      /' _.---._____\n"
		"      \.'   ___, .-'`\n"
		"          /'    \\\\             .\n"
		"        /'       `-.          -|-\n"
		"       |                       |\n"
		"       |                   .-'~~~`-.\n"
		"       |                 .'         `.\n"
		"       |                 |  R  I  P  |\n"
		"       |                 |           |\n"
		"       |                 |           |\n"
		"        \\              \\\\|           |//\n"
		"  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
		"		Just to feel better \\_ ^_^ _/\n"
		"  _____                         ____                 \n"
		" / ____|                       / __ \\                \n"
		"| |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ \n"
		"| | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|\n"
		"| |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |   \n"
		" \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_|   \n";
	std::string random;
	std::cin.ignore();
	std::cin >> random;
}

bool IntroScene1()
{
	PlaySound(TEXT("Main_Menu.wav"), NULL, SND_FILENAME| SND_ASYNC | SND_NOSTOP | SND_LOOP);
	std::cout << "				  The adventure of a DemiGod\n";
	std::cout << "		,_.                                                          ,_.\n";
	std::cout << "		'\\cXX.==- __                                        __ -==,XXv/`\n";
	std::cout << "		    ~=_X7~ ,/~!g=-,_.                      ,_.-=s!~L. ~TX_=~\n";
	std::cout << "		       ~=c. = /- T--e'T|=v._  ....   _,v=!7`z--\\ -\\ = ,v=~ \n";
	std::cout << "		          ~=c` ./ ,-`,/ /i/Z\\/~~~~\\/Z\\i\\ \\.'-. \\, 'v=~\n";
	std::cout << "		             ~\\s,/ ,/ ,/ Y]`/ @/\\@ \\'[Y \\. \\. \\.g/~\n";
	std::cout << "		                '`Yc.v`,/Vs)-  \\/  -(sV\\.'c,v+'`\n";
	std::cout << "		                     ~~]mZczTV '` VTevZm[~~\n";
	std::cout << "		                  ,=-T|--2Y [      ] Y2--!T-=.\n";
	std::cout << "		                  'i`_ -|-'i!      !i`-!- _'i`\n";
	std::cout << "		                    '-s|.cf ,!]\\/[!. 1v,!g-`\n";
	std::cout << "		                        ~Y/v/vv..vv\\v\\Y~\n";
	std::cout << "		                         ^            ^\n";
	std::cout << "At the beginning of time the mighty Owl God fought for the freedom of the mankind with his rival Natas the lord of the dark.\n";
	std::cout << "		Natas, helped by his brother, Anatos, and his horde of demons manage to defeat the OwlGod.\n";
	std::cout << "   After his victory, Natas took human form, and descended on Earth, to rule it with his immortality and demonic power.\n";
	std::cout << "Before he got trapped in a chest sealed by malephic curse, the OwlGod succeeded to create a deadly warrior from his left eye.\n";
	std::cout << "         The legend says that he, will conquer the earth and will release it form the evil and misery.\n";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Are you worthy enough to enter the dangerous world of Natas?\n";
	std::cout << "Press 1 for Hell Yea !   ///////   Press 2 for running away like a scarry cat \n";
	
	int answer;
	bool gameOn = false;
	bool goOn;
	std::cin >> answer;
	do {
		switch (answer)
		{
		case 1:
			gameOn = true;
			goOn = false;
			break;
		case 2:
			gameOn = false;
			goOn = false;
			break;

		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "ha, ha, ha you are so funny trying to press wrong inputs, just press 1 or 2" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);

	system("cls");
	return gameOn;
}


std::string IntroScene2() {
	std::cout <<"				CHOOSE YOUR DESTINY\n";
	std::cout << std::endl;
	std::cout << "		Somewere in the citty of ScrapLand, a woman found a child, crying near a swamp.\n";
	std::cout << "	The woman was shoked when he saw the baby surrounded by the repiles, but none of them tryed to harm him.\n";
	std::cout << "Eventually she brave herself and got closer, in that moment all the reptiles retired, letting her to pick up the baby\n";
	std::cout << "		She looked at his face and a name appears instantly in hers mind, the name was: \n";
	std::cout << std::endl;
	std::cout << "Enter your UserName, you lil hero\n";
	std::string UserName;
	std::cin.ignore();
	std::getline(std::cin, UserName);
	system("cls");
	return UserName;
}

int IntroScene3(std::string userName) {
	

	std::cout << "In the end the "<<userName <<" arrived in a modest family, with working people,\n"<<userName<<"'s mother was a maid in the court of a duke, and his father was a : \n ";
	std::cout << std::endl;
	std::cout << "Press 1 for BlackSmith (you become a Warrior)  <<<<<>>>>> Press 2 for Healer (you become a Wizard)\n";
	int answer;
	int classChoice;
	std::cin >> answer;
	bool goOn;
	do 
	{
		switch (answer)
		{
		case 1: {
			system("cls");
			std::cout << "Since " << userName << "'s dad was a BlackSmith, he used to play a lot with his father swords, daggers, shields and armour in the childhood.\n";
			std::cout << "Sirius (his father) was also quite handy in handling the weapons, so he passes all his knowledge to his son.\n";
			std::cout << "By the age of puberty " << userName << " become a master of the sword, that even the best gladiator of the king could not stand against.\n";
			goOn = false;
			classChoice = 1;
			return classChoice;
			break; 
		};
		case 2: 
		{
			system("cls");
			std::cout << "Since " << userName << "'s dad was a Healer, he used to play a lot with his father books, potions, strange instruments and crystal globes.\n";
			std::cout << "Sirius (his father) named himself a \"healer\" just because Sorcerer would have brought him his death.\n ";
			std::cout << userName << " was educated in the art of magic by Sirius, before he could even speak properly.\n";
			std::cout << "He was so good that in the age of puberty he could wound and heal an entire army.\n";
			goOn = false;
			classChoice = 2;
			return classChoice;
			break; 
		};
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2!" << std::endl;
				std::cin >> answer;
				break;
			}
		}
	} while (goOn);
}



void CharacterCreationArt(int wizOrWar)
{
	if (wizOrWar == 1) {
		std::cout << "      _,." << std::endl;
		std::cout << "    ,` -.)" << std::endl;
		std::cout << "   ( _/-\\\\-._" << std::endl;
		std::cout << "  /,|`--._,-^|            ," << std::endl;
		std::cout << "  \\_| |`-._/||          ,'|" << std::endl;
		std::cout << "    |  `-, / |         /  /" << std::endl;
		std::cout << "    |     || |        /  /" << std::endl;
		std::cout << "     `r-._||/   __   /  /" << std::endl;
		std::cout << " __,-<_     )`-/  `./  /" << std::endl;
		std::cout << "'  \\   `---'   \\   /  /" << std::endl;
		std::cout << "    |           |./  /" << std::endl;
		std::cout << "    /           //  /" << std::endl;
		std::cout << "\\_/' \\         |/  /" << std::endl;
		std::cout << " |    |   _,^-'/  /" << std::endl;
		std::cout << " |    , ``  (\\/  /_" << std::endl;
		std::cout << "  \\,.->._    \\X-=/^" << std::endl;
		std::cout << "  (  /   `-._//^`" << std::endl;
		std::cout << "   `Y-.____(__}" << std::endl;
		std::cout << "    |     {__)" << std::endl;
		std::cout << "          ()" << std::endl;
		std::cout << std::endl;
		std::cout << "Press any key to continue...\n";
		std::string random;
		std::cin.ignore();
		std::cin >> random;
		system("cls");
	}
	else if (wizOrWar == 2) {
		std::cout << "                    ____ " << std::endl;
		std::cout << "                  .'* *.'" << std::endl;
		std::cout << "               __/_*_*(_" << std::endl;
		std::cout << "              / _______ \\" << std::endl;
		std::cout << "             _\\_)/___\\(_/_ " << std::endl;
		std::cout << "            / _((\\^ ^/))_ \\" << std::endl;
		std::cout << "            \\ \\()) - ()/ /" << std::endl;
		std::cout << "             ' \\(((()))/ '" << std::endl;
		std::cout << "            / ' \\)).))/ ' \\" << std::endl;
		std::cout << "           / _ \\ - | - /_  \\" << std::endl;
		std::cout << "          (   ( .;''';. .'  )" << std::endl;
		std::cout << "          _\\\"__ /    )\\ __\" / _" << std::endl;
		std::cout << "            \\/  \\   ' /  \\/" << std::endl;
		std::cout << "             .'  '...' ' )" << std::endl;
		std::cout << "              / /  |  \\ \\" << std::endl;
		std::cout << "             / .   .   . \\" << std::endl;
		std::cout << "            /   .     .   \\" << std::endl;
		std::cout << "           /   /   |   \\   \\" << std::endl;
		std::cout << "         .'   /    b    '.  '." << std::endl;
		std::cout << "     _.-'    /     Bb     '-. '-._ " << std::endl;
		std::cout << " _.-'       |      BBb       '-.  '-. " << std::endl;
		std::cout << "(___________\\____.dBBBb.________)____)" << std::endl;
		std::cout << std::endl;
		std::cout << "Press any key to continue...\n";
		std::string random;
		std::cin.ignore();
		std::cin >> random;
		system("cls");
	}
}

int Scene3Travel(std::string name)
{
	PlaySound(NULL, 0,0);
	PlaySound(TEXT("Exploring.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP| SND_LOOP);
	std::cout << "After having a vision of his real father, the OwlGod, " << name << " had a revelation about his ture nature.\n"
		"All this time he felt different and more powerfull than the others, but he never knew that the reason of his inhuman capacityes was him beying a DemiGod.\n"
		"He spoke with Sirius about the vision, and about his destiny, and at that moment Sirius froze, his face frowning angrily, but also shocked.\n"
		"-I have to fulfill my destiny,he said, you trained me well father, but now is time for me to go and end what my real father started,\n"
		"-I will protect you and mom from that evil creature Natas, I will save the world.\n"
		"When Sirius heard all of his stepson speech, a little smile show on the edge of his lips:\n"
		"-Then go and end the suffer from the world!\n"
		"So in the end, " << name << " left Scrapsland and begin his jurney to kill Natas and his brother Anatos.\n";
	std::cout << std::endl;
	std::cout << "Somewere on his road, the DemiGod,found himself on a crossroad of 3 roads.\n"
	"The left one leads to BurkPalace, a town well known for its coruption and high crime rate.\n"
	"The middle one leads to The Carpathian Mountains, in this mountains Anatos and his horde of vampires are rumored to be ghosting around.\n"
	"And the last road leads to The Forest of the Hanged, called like this for obvious reasons.\n";
	std::cout << std::endl;
	std::cout << "Choose your path: 1 or 2 or 3...\n";
	int answer;
	bool goOn;
	int ans;
	std::cin.ignore();
	std::cin >> answer;
	do {
		switch (answer)
		{
		case 1:
			goOn = false;
			ans = 1;
			system("cls");
			break;
		case 2:
			std::cout << "This is a very dangerous road, you really need some more experience to walk this path.\n"
				"Try first the City, maybe you can learn something useful there.(~^-^)~\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 or 3!\n" << std::endl;
				std::cin >> answer;
			}
			break;
		case 3:
			std::cout << "Hmm, seems like your level isn't high enouth to pass trough this path.\n"
				"Looks like you have some unfinished business elsewhere \\_(-_-)_/\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 or 3!\n" << std::endl;
				std::cin >> answer;
			}
			break;
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 or 3!\n" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);
	return ans;
}

void SceneChestIntro(int choice)
{
	std::cout << "                            _.--."<<std::endl;
	std::cout << "                        _.-'_:-'||"<<std::endl;
	std::cout << "                    _.-'_.-::::'||"<<std::endl;
	std::cout << "               _.-:'_.-::::::'  ||"<<std::endl;
	std::cout << "             .'`-.-:::::::'     ||"<<std::endl;
	std::cout << "            /.'`;|:::::::'      ||_" << std::endl;
	std::cout << "           ||   ||::::::'     _.;._'-._" << std::endl;
	std::cout << "           ||   ||:::::'  _.-!oo @.!-._'-." << std::endl;
	std::cout << "           \'.  ||:::::.-!()oo @!()@.-'_.|" << std::endl;
	std::cout << "            '.'-;|:.-'.&$@.& ()$%-'o.'\\U||" << std::endl;
	std::cout << "              `>'-.!@%()@'@_%-'_.-o _.|'||" << std::endl;
	std::cout << "               ||-._'-.@.-'_.-' _.-o  |'||" << std::endl;
	std::cout << "              ||=[ '-._.-\\U/.-'    o |'||" << std::endl;
	std::cout << "               || '-.]=|| |'|      o  |'||" << std::endl;
	std::cout << "               ||      || |'|        _| ';" << std::endl;
	std::cout << "               ||      || |'|    _.-'_.-'" << std::endl;
	std::cout << "               |'-._   || |'|_.-'_.-'" << std::endl;
	std::cout << "                '-._'-.|| |' `_.-'" << std::endl;
	std::cout << "                    '-.||_/.-'" << std::endl;
	std::cout << std::endl;
	std::cout<<"Hey, look!\n";
	std::cout<<"You found a chest, maybe it countain a treasure, or something usefoul for your jurney\n";
	std::cout << "Press 1 to open the chest <<>> Press 2 to leave it\n";
	int answer;
	bool goOn;
	std::cin.ignore();
	std::cin >> answer;
	do {
		switch (answer)
		{
		case 1:
			goOn = false;
			std::cout << "Uh, there are 2 items, seems to be a weapon and a armour, them could be usefull\n ";
			break;
		case 2:
			goOn = false;
			std::cout << "LoL, you really wanted to leave empty handed? ^_^ i'll give you the items anyways\n";
			break;
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 !\n" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);

}

void SceneEquiping(Player* player)
{
	player->equipItem(1);
	player->IncreaseStats(1);
	player->equipItem(2);
	player->IncreaseStats(2);
	std::cout << "You got some good stuff in that chest, seems like your father let them here for you to find out\n"
		"I will help you and autoequip them, but for the next time you will be able to equip/unequip the items you want\n\n";
	player->PrintInventory();
	std::cout << "\n Up there is your inventory, you can see your items, theirs stats, and the status (equiped/unequiped)\n"
		"And down here is your stats, you can see stats like Healts, AttackPower and so on, this will be usefoul in the future\n\n";
	player->PrintStats();
	std::cout << "Press any key to continue...\n";
	std::string random;
	std::cin.ignore();
	std::cin >> random;
	
}

void SceneTheCity(Player *player, Enemy* enemy)
{
	system("cls");
	std::cout << "So the City of BurkPalace, a verry good choice for your first adventure (keep this between us but you really have not much of a chose)\n"
		"Be careful, this city is well known for it's agressive locals, the criminal activity in this city have got above the ceiling, everyone is a thief, a murderer, a hustler, rapists and so on...\n"
		"After few minutes of walking, the mighty DemiGod saw, far away, rising above the horizon line the city.\n"
		"A massive cross was the first thing his eyes could see.The cross was shiny and stately.\n"
		"It was made of gold, and the sides of the cross were made by silver, all of this with the purpose of imposing opulence.\n"
		"The priest was a very important person in the town, and all he held all the executive power.\n"
		"On his way, to get to the city, the DemiGod saw a little creature, and curious by his nature, he get close to it to see what kind of animal it is.\n"
		" /\\_/\\\n"
		"(='_' )\n"
		"(, (\") (\")\n"
		"-HMM, looks like a strange cat, said the DemiGod."
		"But when he got closer to pet it, a thief jump out of a bush and sneak his weapon.\n"
		"After this scene, a moment of silence and wonder appears, while the thief manages to take a few quick steps to escape with the prey."
		"-Hey you, STOP over there, you slipery rat, exclaim the DemiGod, before throwing a rock which hit the thief in the head;\n"
		"In few seconds, " << player->getPlayerName() << " catches the thief, who struggle to escape.\n\n";
		enemy->PrintEnemyStats();
		std::cout << std::endl;
		std::cout<<"Seems like you need to fight the thief, because his intentions are to cut your heart out of the chest with your own sword;\n"
		"All of this being said, a duel had begun.\n";
		player->unequipItem(1);
		player->DecreaseStats(1);
		std::cout << "Press any key to continue...\n";
		std::string random;
		std::cin.ignore();
		std::cin >> random;
}

void FightSceneThief(Player* player, Enemy* enemy)
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("BattleFinal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
	int playerAttack, enemyAttack, playerHealth, enemyHealth;
	playerAttack = player->Attack();
	enemyAttack = enemy->Attack();
	playerHealth = player->getHealth();
	enemyHealth = enemy->getHealth();
	do
	{
		enemyHealth -= playerAttack;
		std::cout <<"Enemy's health after you have attacked: " << enemyHealth << std::endl;
		//Sleep(100);
		if (enemyHealth <= 0)
			break;
		playerHealth -= enemyAttack;
		std::cout <<"Your health after Enemy have attacked: " << playerHealth << std::endl;
		//Sleep(100);
		if (playerHealth <= 0)
			break;
	} while (enemyHealth >=0 || playerHealth >=0);
	if (enemyHealth < playerHealth)
	{
		std::cout << "You Won\n";
		player->increaseLevel();
		player->equipItem(1);
		player->IncreaseStats(1);
	}
	else
		std::cout << "You Lose\n";
	player->setPlayerHealth(playerHealth);
	std::cout<<"Press any key to continue...\n";
	delete enemy;
	std::string random;
	std::cin.ignore();
	std::cin >> random;
}

Enemy* GenerateEnemy(Player* player)
{
	Enemy* Enemy = NULL;
	int lvl = player->getLevel();
	switch (lvl)
	{
	case 1:Enemy = new Theif();
		return Enemy;
		break;
	case 2:
		Enemy = new Orch();
		return Enemy;
		break;
	case 3:
		Enemy = new Anatos();
		return Enemy;
		break;
	case 4:
		Enemy = new Anatos();
		return Enemy;
		break;
	case 5:
		Enemy = new Natas();
		return Enemy;
		break;
	default:
		std::cout << "You really can't get here\n";
		return Enemy;
	}
}

bool RestCity(Player* player)
{
	system("cls");
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("Exploring.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
	std::cout << "After getting rid of the thief, and recovered his weapon, the DemiGod saw an interesting pice of gear wich the dead body was wearing\n"
		"He picked it up, and inspect it\n\n";
	player->AddItem(player->CreateArmour());
	player->PrintInventory();
	std::cout << "\nThe last item in your inventory is the item that you just picked up\n"
		"You can choose to equip it or not, but be careful if you don't equip the item, it can affect your pregress\n"
		"Press 1 to Equip the Item <<<<<----->>>>> Press 2 to Not Equip the item\n";
	int answer1;
	std::cin >> answer1;
	bool goOn1=false;
	do
	{
		switch (answer1)
		{
		case 1: {
			player->equipItem(3);
			player->IncreaseStats(3);
			system("cls");
			std::cout << "Item was equiped\n";
			break;
		};
		case 2:
		{
			system("cls");
			std::cout << "As you wish\n";
			break;
		};
		default:
			std::cout << "Wrong key, try again\n";
			goOn1 = true;
			std::cin >> answer1;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2!" << std::endl;
				std::cin >> answer1;
				break;
			}
		}
	} while (goOn1);
	std::cout<<"All of this beying done, the DemiGod continued his jurney to te cityy of BurkPlace\n"
		"Once there he descover the real misery of the city, and his stinky streets.\n"
		"Screams everywhere, some of them comes from peasants trying to sell their goods, another one comes from people who fight in the middle of street,\n"
		"another screams came from women who try to escape being raped and so on...\n"
		"Is not a good place to stay the night, and also its a risc to be robbed, but in your condition is not a great idea to keep on walking\n"
		"Maybe try to find a place to stay and recover and in the morning you can continue your jurney, at the end of the day if you want to fight Natas you need to be well rest and in a good shape..."
		"and also night can harm the harmony\n"
		"Or maybe you want to continue, who am I to tell you what to do?\n\n"
		"Press 1 to seek for a place <<<--->>> Press 2 to continue your jurney\n";
	int answer2;
	std::cin >> answer2;
	bool goOn2;
	do
	{
		switch (answer2)
		{
		case 1: {
			return true;
			break;
		};
		case 2:
		{
			return false;
			break;
		};
		default:
			std::cout << "Wrong key, try again\n";
			goOn2 = true;
			std::cin >> answer2;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2!" << std::endl;
				std::cin >> answer2;
				break;
			}
		}
	} while (goOn2);
}

void RestCityRefuse()
{
	system("cls");
	std::cout << "Preety well, so our Hero chooses to see his way\n"
		"He left the city, with his wounds untreadet. On his way he left a short blood trail behind him.\n"
		"The dark has fallen\n"
		"After a few hours of walking in the dark, the DemiGod started to hear some rustling around him.\n"
		"His mind was prepare for the fight, but his body was not.\n"
		"Few minutes after hearing noises in the bushes, Anatos was facing him...\n"
		"He and other 2 daemon, Comanders of his horde\n\n"
		"Now, you can think, i reall don't want to say 'I told you to' I also let u a hidden message, remember ?\n"
		"\"and also night can harm the harmony\"\n"
		"Yea, it's obvious that you died, but don't be sad, i prepare a tombstone for you\n";
	deadArt();
	std::string random;
	std::cin.ignore();
	std::cin >> random;
}

void RestCityAccept()
{
	system("cls");
	std::cout << "The DemiGod chooses to stay the night in city of BurkPlace\n"
		"Eventually he found a tavern with a big sign hanging from the ceiling wich said \"Free Room for our customers who take dinner and drink our beer\" "
		"What more can you wish?, he thought\n"
		"After eating and drinking a few beers, the lucky DemiGod, got to talk with a preety woman wich introduce herself as quack Raphaela, well known for her miraculous herbage\n"
		"She healed our hero wounds, and also gifted him a night of passion and some green pounder to smoke\n"
		"-Oh my, this green powder hit like a dragon!, exclaim the DemiGod\n"
		"And some visioins about his destiny occurred\n"
		"He saw himself, with Natas's head in his left hand and Anatos's head in his other hand, screaming \" Father, oh my Father\"\n"
		"Quite strange if you ask me \n"
		"After all of this creepy events, he fell asleep\n"
		"In the morning, all his wounds where cured, his energy was up and he felt like he is invincible\n"
		"Except, the preety ladi, she was no where to found, she just disappeared\n"
		"After taking one more meal at the Tavern, our hero resumed his jurney\n";
	crossroad();
	int answer;
	bool goOn;
	std::cin.ignore();
	std::cin >> answer;
	do {
		switch (answer)
		{
		case 1:
			goOn = true;
			std::cout << "Hmm, looks like you have some memory loses, the city is exactly the first place that you had visited\n"
				"I think that that green powder is still tickling your brain\n"
				"C'mon, try something new, don't you want an adventure????(~^-^)~\n";
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Choose your path : 1 or 2 or 3... \n" << std::endl;
				std::cin >> answer;
			}
			break;
		case 2:
			std::cout << "Now, i don't know if you tried all the buttons in the last scene, but if you don't I will tell you:\n"
				"This is a verry dangerous road, you need to gain some more experience to pass.\n"
				"And if you already pressed 2 in last scene, damn, that really need to be smoething with that green powder.\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Choose your path : 1 or 2 or 3...\n" << std::endl;
				std::cin >> answer;
			}
			break;
		case 3:
			goOn = false;
			system("cls");
			break;
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 or 3!\n" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);
}

void SceneTheForestDead(Player* player, Enemy* enemy)
{
	crossroad();
	int answer;
	bool goOn;
	std::cin.ignore();
	std::cin >> answer;
	do
	{
		switch (answer)
		{
		case 1:
			goOn = true;
			std::cout << "Hmm, looks like you have some memory loses, the city is exactly the first place that you had visited\n"
				"I think that that green powder is still tickling your brain\n"
				"C'mon, try something new, don't you want an adventure????(~^-^)~\n";
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Choose your path : 1 or 2 or 3... \n" << std::endl;
				std::cin >> answer;
			}
			break;
		case 2:
			PlaySound(NULL, 0, 0);
			PlaySound(TEXT("BattleFinal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
			system("cls");
			std::cout << "So the Carpathian Mountain, this place if full of daemons and vampires\n"
				"Oh, speaking about them, right in front of you appeard Anatos and his lovely horde, now good luck fighting that with so few stats\n";
			enemy->PrintEnemyStats();
			std::cout << "Above you have your enemy stats\n"
				"All of this being said\n"
				"LEEEEEEETTTTSSSSS GEEEEEEEEEEEEET RRRRRRRRRRREEADY TOOOOOOOO RRRRUMBLEEEEEE\n";
			Sleep(5000);
			FightScene(player, enemy);
			system("cls");
			std::cout << "Yea, mate, big loss, but be happy, you just found out another Ending\n"
				"In this one you end up burried in the garden of Anatos's Castel\n"
				"Nice Job!\n"
				"Ah, and don't forget the tumb\n";
			deadArt();
			break;
		case 3:
			goOn = true;
			std::cout << "Really?\n"
				"You my friend, just ran away from a stupid Orch and now you want to get back\n"
				"You got some balls to press 3 my Amigo, but this is not how this game works\n"
				"First you are scared and now you are the Big Knight on a wite horse or something like that?\n"
				"Nah, nah, nah, nah, You my worthy, friend are going to face Anatos in the Carpathian Mountains, and I will enjoy it\n";
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Choose your path : 1 or 2 or 3...\n" << std::endl;
				std::cin >> answer;
			}
			break;
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 or 3!\n" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);
}

bool SceneTheForest(Player* player,Enemy* enemy)
{
	system("cls");
	std::cout << "The Forest of the Hanged to be\n"
		"There is a urban legend that in this Forest, people come to take them life by hanging themselves\n"
		"Also another legend is saing that people who come here to picnic end up being hanged by some Devilish creatures, some of them call them deamons, others call them vampires\n"
		"Of course non of the legends are true, because we all know vampires feed form the blood of innocent people, and they also live in the Carpathian Mountains\n"
		"In reality this Forest is ruled by some Orchs, some big, ugly and stinky creatures, wich cares only about war and torture\n"
		"   /\\/\\|/\\/\\\n"
		"{{{{{{{|}}}}}}}\n"
		"/\\{<o | | o<}/\\\n"
		"\\\\\\  ),_,(  ///\n"
		"(_/\\       /\\_)\n"
		"   | V^^V |\n"
		"    \\_)_(/\n"
		"They are the true reason why people are hanged in trees, after being tortured.\n"
		"Oh, speaking about ugly creatures, right in front of you, not so far away there is a big one\n"
		"You can see his stats on your screen:\n\n";
	enemy->PrintEnemyStats();
	std::cout<<std::endl;
	player->PrintStats();
	std::cout << "\nAlso your stats are printed on the screen above this message\n"
		"You can choos to fight him, or to get back to the crossroad...\n"
	"Press 1 to fight the Orch <<<<<----->>>>> Press 2 to get back to the Crossroad\n";
	int answer;
	bool goOn;
	std::cin.ignore();
	std::cin >> answer;
	do {
		switch (answer)
		{
		case 1:
			goOn = false;
			system("cls");
			FightScene(player, enemy);
			return true;
			break;
		case 2:
			goOn = false;
			system("cls");
			player->increaseLevel();
			return false;
			break;
			
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 !\n" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);
}

void SceneForestAfterBattle(Player* player)
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("Exploring.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
	system("cls");
	player->AddItem(player->CreateArmour());
	std::cout << "Well fought !\n"
		"He almost got you, that was close, but look, there is a pice of gear on that orch, you may be able to use it\n"
		"Under this message you can see your inventory, the new item is in the last spot\n"
		"Press 1 to equip the item <<<<<----->>>>> Press 2 to not equip the item\n";
	int answer;
	bool goOn;
	std::cin.ignore();
	std::cin >> answer;
	do {
		switch (answer)
		{
		case 1:
			goOn = false;
			player->equipItem(4);
			player->IncreaseStats(4);
			std::cout << "Item was equiped\n";
			break;
		case 2:
			goOn = false;
			std::cout << "Item was not equiped\n";
			break;
		default:
			std::cout << "Wrong key, try again\n";
			goOn = true;
			std::cin >> answer;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1 or 2 !\n" << std::endl;
				std::cin >> answer;
			}
			break;
		}
	} while (goOn);

	std::cout << "Good, now that you made your choise, it's time to rest (if you want to).\n"
		"But remember, your health is verry low in this moment, is not a good idea to continue without resting.\n"
		"Press 1 to rest   <<<<<----->>>>> Press 2 to keep going\n";
	
	int ans;
	bool goOn1; 
	std::cin.ignore();
	std::cin >> ans;
	do {
		switch (ans)
		{
		case 1:
			goOn1 = false;
			system("cls");
			player->updateHealth();
			std::cout << "In that night, every thing could happend, the DemiGod was alone in the forest, surrounded by evil creatures.\n"
				"He was so afraid to fall asleep, because he was not in the best shape.\n"
				"But from the dark he heard a kind voice, telling him:\n"
				"-Be not afraid, my love, i will keep you safe and alive until morning.\n"
				"After few seconds, in his site, the beauty Raphaela, appeard.\n"
				"Beside being a quack, she is also one of the most powerfull witches in the world.\n"
				"She took care of the DemiGod and in the morning he felt better than ever, and like the last time, the witch was gone and no where to find\n"
				"With his new pice of gear, and his wounds heald, our hero resumed his quest\n";
			crossroad();
			int answer;
			bool goOn;
			std::cin >> answer;
			do {
				switch (answer)
				{
				case 1:
					goOn = true;
					std::cout << "Hmm, looks like you have some memory loses, the city is exactly the first place that you had visited\n"
						"I think that that green powder is still tickling your brain\n"
						"C'mon, try something new, don't you want an adventure????(~^-^)~\n";
					std::cin >> answer;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore();
						std::cout << "Choose your path : 1 or 2 or 3... \n" << std::endl;
						std::cin >> answer;
					}
					break;
				case 2:
					goOn = false;
					system("cls");
					std::cout << "Ah finally the Carpahtian Mountains, house of daemons and vampires\n"
						"There are rumours that Dracula (the lord Vlad Tepes) is still somewhere in the mountains\n\n";
					break;
				case 3:
					std::cout << "This is the place from where you just came, the Orch is dead, the gear is yours\n"
						"Maybe you should try something more unknown, and challenging\n"
						"Like road nr.2 ???? for example (Im just saing)  (> '.')>\n";
					std::cin >> answer;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore();
						std::cout << "Choose your path : 1 or 2 or 3... \n" << std::endl;
						std::cin >> answer;
					}
					goOn = true;
					break;
				default:
					std::cout << "Wrong key, try again\n";
					goOn = true;
					std::cin >> answer;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore();
						std::cout << "Press 1, 2 or 3!..." << std::endl;
						std::cin >> answer;
					}
					break;
				}
			} while (goOn);
			break;
		case 2:
			goOn1 = false;
			system("cls");
			break;
		default:
			std::cout << "Wrong key, try again\n";
			goOn1 = true;
			std::cin >> ans;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Press 1, 2 or 3!...\n" << std::endl;
				std::cin >> ans;
			}
			break;
		}
	} while (goOn1);
}

void SceneMountains(Player* player, Enemy* enemy)
{
	
	std::cout << "The Carpathian Mountains, the most beautiful place in the world.\n"
		"Also the most dangerous, by the time of Natas descendence on the earth, he picked this place to build his magical Castel, because of it greateness.\n"
		"After building his castel, Natas had ordered to Anatos to bring all his daemons around it, and to guard the monstrous building with the price of his own life.\n"
		"All this years, Anatos easily denfended the castel from being conquered. \n"
		"Them biggest enemy was, Vlad Tepes, nicknamed \"Dracula\" or \"Vlad the Impaler\". \n"
		"But not even Vlad, well known for his brutality in war, could conquer the Castel, and release the world form Natas and Anatos.\n"
		"Some of the urban legends concocted by wizards and witches rumored that only a half God, half Human can bring peace in the world, others tells that only a human with the help of a hybrid creature can cure the world from the evil.\n"
		"Maybe, the most wanted day in the whole humanity had to come.\n";
	std::cout << std::endl;
	std::cout << "After walking alone through the narrow paths of the mountain, the DemiGod started to hear some voices.\n"
		"He sneak up in a tree, and wait for few seconds, before 3 men arrived.\n"
		"They where Anatos, and his 2 Generals.\n"
		"The generals vanished after Anatos gave them some orders, letting him behind.\n"
		"Now is my time, " << player->getPlayerName() << " thought\n"
		"Under this message you can see Anatos's stats, and also yours\n\n";
	enemy->PrintEnemyStats();
	std::cout << std::endl;
	player->PrintStats();
		std::cout<<"\nPress 1 to challange him and have a fair fight <<<<<----->>>> Press 2 to ambush Anatos \n";
	int ans;
	bool goOn;
	std::cin.ignore();
	std::cin >> ans;
	do {
		switch (ans)
		{
		case 1:
			system("cls");
			goOn = false;
			std::cout << "-Hey, you bastard daemon, come and fight me!";
			break;
		case 2:
			system("cls");
			goOn = false;
			enemy->setHealth(enemy->getHealth() / 2);
			std::cout << "A perfect ambush, you mannage to hit Anatos really hard!\n"
				"Your strike left anatos with half on his Health.\n";
			break;
		default:
		std::cout << "Wrong key, try again\n";
		goOn = true;
		std::cin >> ans;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Press 1, 2 or 3!...\n" << std::endl;
			std::cin >> ans;
		}
		break;
		}
	} while (goOn);
	FightScene(player, enemy);
}

void SceneMountainsVictory(Player* player)
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("Exploring.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);
	system("cls");
	std::cout << "This was a verry close fight, in the last moment the mighty DemiGod managed to take a good strike and end Anatos's life\.n"
		"This is a big victory not only for you, but for the whole humankind!!!\n"
		"One of the worst nightmares wich had ever lived the Earth are gone, and you dit it by yourself, you are the real hero from witches legends!\n\n"
		"After killing Anatos, the beauty Raphaela arrived from the sky.\n"
		"-(R) I knew you would fulfill the prophecy!, exclaim Raphaela.\n"
		"-(R) from the first time I felt that you are the chosen one, son of light and dark, created in the Netherrealm and born on Earth,\n"
		"-(R) peace bringer and daemon slayer, all the myths where true!\n"
		"-(DG) If you knew, why didn't you told me?\n"
		"-(DG) this was the reason why you appeard in the most crucial moments of my life?\n"
		"-(DG) all the herbs where just to show me my futur..... wait, you know how all of this is ending, aren't you?\n"
		"-(R)....., a long and overwhelming quiet.\n"
		"-(DG) How will I end up??? And why I was shouting \"Father, oh my Father\" in my vision???"
		"-(DG) I need to know!\n"
		"-(R) I can't tell you, all I am able to say is that you need to find an old friend, he will help you get through the tough moments\n"
		"-(R)And also you need to make a ring, or a necklace from Anatos's eye or tooth, his eyes give you magical powers, and his tooth can bring you strength, but be careful, you can wear only one pice! Choose the one your nature tells you to!\n"
		"After she heald DemiGod's wunds, she disappeared in the sky, like a falling star in the evening darkness";
	player->AddItem(player->CreateArmour());
	player->PrintInventory();
	player->increaseLevel();
	std::cout << "After painstakingly crafted your item, you can choose to wear it or not.\n"
		"Press 1 to Not wear it <<<<<----->>>>> Press 2 to Wear it\n";
	int answer;
	bool goOn;
	std::cin >> answer;
	switch (answer) 
	{
	case 1:
		goOn = false;
		system("cls");
		std::cout << "As you wish\n";
		break;
	case 2:
		goOn = false;
		system("cls");
		player->equipItem(5);
		player->IncreaseStats(5);
		std::cout << "Item equiped\n";
		break;
	default:
		std::cout << "Wrong key, try again\n";
		goOn = true;
		std::cin >> answer;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Press 1 or 2 !..." << std::endl;
			std::cin >> answer;
		}
		break;
	}
}

void FightSceneWrongChoose(Player* player, Enemy* enemy)
{
	int playerAttack, enemyAttack, playerHealth, enemyHealth;
	playerAttack = player->Attack()*2;
	enemyAttack = enemy->Attack();
	playerHealth = player->getHealth()/2;
	enemyHealth = enemy->getHealth();
	do
	{
		enemyHealth -= playerAttack;
		std::cout << "Enemy's health after you have attacked: " << enemyHealth << std::endl;
		Sleep(100);
		if (enemyHealth <= 0)
			break;
		playerHealth -= enemyAttack;
		std::cout << "Your health after Enemy have attacked: " << playerHealth << std::endl;
		if (playerHealth <= 0)
			break;
	} while (enemyHealth >= 0 || playerHealth >= 0);
	std::cout << "Nice try my little fellow, but I am the king of dark, you can never take my throne alone!!!\n"
		"                                             /  /  /\n"
		"|\\/| |  | |__|  /\\  |__|  /\\  |__|  /\\      /  /  /\n"
		"|  | \\__/ |  | /~~\\ |  | /~~\\ |  | /~~\\    .  .  . \n";
	deadArt();

	std::cout << "Press any key to continue...\n";
	delete enemy;
	std::string random;
	std::cin.ignore();
	std::cin >> random;
}

void SceneNatas(Player* player)
{
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("EndGame.wav"), NULL, SND_FILENAME| SND_ASYNC | SND_NOSTOP | SND_LOOP);
	std::cout << "Oh, my! Why do I hear Boss music?\n"
		"I wonder what Rapahela talked about, \" find a friend\"\n"
		"No!!!, it can't be, she spoke about Vlad the Impaler\n"
		"And it happend that i know where you can find him.\n"
		"You need to get to the Bran Castel, once you get there, you need to go in the basement, there you need to draw a pentagram on the wall near the crypt door\n"
		"Be shure to use embers mixt with your blood for the drawing, when you are done knee in front of the crypt and say this words\n"
		"Expergiscere magnum dominum, frange signaculum, pasce sanguine inimici et renascendi.\n"
		"Magnus invasor, magni Alucardi pater, vivit!!!\n"
		"Choose your path: Press 1 to go find Vlad <<<<<----->>>>> Press 2 to continue alone\n";
	int answer;
	bool goOn;
	std::cin >> answer;
	switch (answer)
	{
	case 1:
		goOn = false;
		system("cls");
		break;
	case 2:
		goOn = false;
		system("cls");
		std::cout << "After walking alone in the Carpathian Mountains you eventually found Natas, extremly fussy because ou killed his loyal pet Anatos\n"
			"He casted an ancient curse, called Medal Reverse, wich took you half of your health, but the good part is that the curse doubled your powers\n"
			"And a fight begun!!!\n";
		Sleep(15000);
			FightSceneWrongChoose(player, GenerateEnemy(player)) ;
		break;
	default:
		std::cout << "Wrong key, try again\n";
		goOn = true;
		std::cin >> answer;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Press 1 or 2 !..." << std::endl;
			std::cin >> answer;
		}
		break;
	}

}

void SceneFinalFight()
{
	std::cout << "Once arrived to Bran Castel, the DemiGod, get straight to the crypt and initialise the ancient ritual\n"
		"After ending the ritual, a thunder like sound was heard\n"
		"And the big dor in front of him started to creak\n"
		"Press anithing to continue... "
		"For a better experience make shure your console is in full screen mode";
	std::string random;
	std::cin.ignore();
	std::cin >> random;
	std::cout << "The cruel Impaler, took a step out of his tomb, asking:\n"; Sleep(300);
	std::cout << "                                                                     ..........       ......'''''''''''....                                               \n";Sleep(200);
		std::cout << "                                                                           .........         .............                                            \n"; Sleep(200);
		std::cout << "                                 ..,:cloooool:;'.                                ........                                                             \n"; Sleep(200);
		std::cout << "                             .':ok0KXXXXXXXXXXXKk;                                    .........                                                       \n"; Sleep(200);
		std::cout << "                           .cx0XXXXXXXXXXXXXXXXXk' .lo,.                                   ..........                                                 \n"; Sleep(200);
		std::cout << "                         'oOXXXXXXXXXXXXXXXXXXX0: .oKXKx;.                                       ...........                                          \n"; Sleep(200);
		std::cout << "                       .l0KKKKXKKKXXXXXXXXXXXXKo..oKXXXXKd'                                       .co;. .................                             \n"; Sleep(200);
		std::cout << "                      'xKKKKKKKKKKKKKKKKKKKKKKx'.l0KXXKXXKO:                                     .lKXx.        ..'......'''............               \n"; Sleep(200);
		std::cout << "                     'x0KKKKKKKKKKKKKKKKKKKKKO;.:0KKKKKKKKKd.                                    :0XX0:        .ckxdollc::;,,''.......................\n"; Sleep(200);
		std::cout << "                    .o000000000000000KKKKKKKOc.;OKKKKKKKKKk,                                    .xXXXKd.        lKXXXXXXKKK0OOkxddoollccc:,...........\n"; Sleep(200);
		std::cout << "                    ,k000000000000000000000Ol.,x000000KKKk;                                     ;OKKKKk,        cKXXXXXXXXXXXXXXXXXXXXXXXKd.          \n"; Sleep(200);
		std::cout << "                   .cOOOOOOOOOOOOOOO000000kl,:x000000000O:                   '.                 :0KKKK0c        :0XKKKKKKKKKKKKKKKKKKKKKKXk.          \n"; Sleep(200);
		std::cout << "                   .lkkkOOOOOOOOOOOOOOOOOxccoxkOOOOOOO0Oc.                .;l:                  ;O00000o.       ;OKKKKKKKKKKKKKKKKKKKKKKKKx.          \n"; Sleep(200);
		std::cout << "                   .lkkkkkkkkkkkkkkkkkkkoclxkkOOOOOOOOOl.               .:OKd. ''               'xOOOOOx,       ,k000000000000000000000000l.          \n"; Sleep(200);
		std::cout << "                    :xxxxxxxxxxxxxkkkkdccdkkkkkkkkkkkko.               ,xKx:. ,oc.              .ckkkkkx;       ,k0000000OOOOOOOOOOOOOOO0x,           \n"; Sleep(200);
		std::cout << "                    'oddddddxxxxxxxxxo:cdxxxxxxxxxxkkd,              .lKXx'  ,dOd.               'oxxxxxc.      'xOOOOOOOOOOOOOOOOOOOOOOk:.           \n"; Sleep(200);
		std::cout << "        .. .,'.     .:ooddddddddddddl:lddddddxxxxxxxx:.             ;ONXx. .;dOKd.                'lddddc. .    'dkkkkkkkkkkkkkkkkkkkkkxc.            \n"; Sleep(200);
		std::cout << "        ';.,0Xko:.   .:looooooooooolclooooddddddddddl.            .oKNKo..,ld0XNd.                 .clooc...    ,dxxxxxxxxxxxxxxxxxxxxd:.             \n"; Sleep(200);
		std::cout << "        ;c.:KNNNN0c.  .;lllllllllllllloooooooooooool,            ;ONN0c. ,xOKNNNd.                  .,:c:...    ,odooodooooooooooooooc'               \n"; Sleep(200);
		std::cout << "        cl.lXNNNNNXd'   ':cccccccccccllllllllllllll;.          .lKNXOc..cONNNNNXd.                    .',....   ,llllllllllllllllll:'.                \n"; Sleep(200);
		std::cout << "        :c.oNNNNNNNXo.   .';:::::::::ccccccccccccc:.          .oXNXkl,;kXNNNNNNXd.             ..         ...  .,cccccccccccccc:;,.                   \n"; Sleep(200);
		std::cout << "        .,.dNNNNNNNNO'     ..';;;;;;;:::::::::::::,          .xXNKOd:l0NNNNNNNNXo.               ..'.          .,;;;;;;;;;;,,'..                      \n"; Sleep(200);
		std::cout << "          .xNNNNNNNN0o,.      ...',,,;;;;;;;;;,,'..         'kNNXKxldXNNNNNNNNNXo.              'cxOo,.          .........                            \n"; Sleep(200);
		std::cout << "          .kNNNNNNNNNNKd'           ..........             'kNNNXOdOXNNNNNNNNNNKl.               'xK0kxxo,..                                          \n"; Sleep(200);
		std::cout << "          .kNNNNNNNNNNNXx,.                               'xNNNNOx0NNNNNNNNNNNNK:               .dXK000K0kOO;                                         \n"; Sleep(200);
		std::cout << "          .dNNNNNNNNNNNNXOc.                   .cc.      'dXNNNK0XNNNNNNNNNNNNNKl               'O0kkOO00KNK:'odl;..              .;:'                \n"; Sleep(200);
		std::cout << "           :KNNNNNNNNNNNNNKl.              ..;dKNO'     ,o0NNNNXNNNNNNNNNNNNNNNK:               .xNNNNNNNNN0;:KNNNKOxl;..        ,xd'                 \n"; Sleep(200);
		std::cout << "           .xNNNNNNNNNNNNNNXx,   .,:cloddxxO0XNNNO'    ;k0XNNNNNNNNNNNNNNNNNNNN0:               .dNNNNNNNNNx'lXNNNNNNNNKOdc;....;kd.                  \n"; Sleep(200);
		std::cout << "            ;0NNNNNNNNNNNNNNXd:lk0XNNNNNNNNNNNNNN0;   'kNNNNNNNNNNNNNNNNNNNNNNNO'                :KNNNNNNNKdckXNNNNNNNNNNNNXK0OkOx.                   \n"; Sleep(200);
		std::cout << "            .oXNNNNNNNNNNNNNXXNNNNNNNNNNNNNNNNNNNK:  .oXNNNNNNNNNNNNNNNNNNNNNNNk'                ,0NNNNNNNOk0KNNNNNNNNNNNNNNNNNN0;                    \n"; Sleep(200);
		std::cout << "             'kNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXc  ,0NNNNNNNNNNNNNNNNNNNNNNNNk'                .xNNNNNNKOKNNNNNNNNNNNNNNNNNNNXo.                    \n"; Sleep(200);
		std::cout << "              :KNNNNNNNNNNNNNXXXXXK000O0KKKXNNNNNXl  lKXXNNNNNNNNNNNNNNNNNNNNNXd.                 'xXNXXNXXNNNNNNNNNNNNNNNNNNNNk'                     \n"; Sleep(200);
		std::cout << "              .dNNNNNXK0Okdl:,''',,',:clxkxk0XNNNXl .dXOKNNNNNNNNNNNNNNNNNNNNNNx.       .,.        .,;,,;:cloxOKXNNNNNNNNNNNNNO,                      \n"; Sleep(200);
		std::cout << "               ,0NNNN0:..     .':oxk0KXNNNNNNNNNNKo..xXdxXNNNNNNNNNNNNNNNNNNNNNx.       co'                   ..,cd0XNNNNNNNXx'                       \n"; Sleep(200);
		std::cout << "                lXNNNXc     .d0XNNNNNNNNNNNNNNNNN0xl;dNOddkKNNNNNNNNNNNNNNNNNNNk.      'OXk;                       .,cONNNNKl.                        \n"; Sleep(200);
		std::cout << "                .kNNNNO'    'ONNNNNNNNNNNNNNNNNNXOK0coNNXx;':d0NNNNNNNNNNNNNNNNK;     .dXNN0c.       ;xkkxxdlloc,.    'd0X0:                          \n"; Sleep(200);
		std::cout << "                 :KNNNXl    .o0NNNNNNNNNNNNNNNNNXXNNxoKNNN0:  .cOXNNNNNNNNNNNNNXc     ;0NNKx;        ,0NNNNNNNNNKOdc,. .'ll.                          \n"; Sleep(200);
		std::cout << "                 .dXNNN0;   'xxkKNNNNNNNNNNNNNNNNNNNXkkXNNNKc   .l0NNNNNNNNNNNNXl    .oKkl'          .xNNNNNNNNNNNNNXx'                               \n"; Sleep(200);
		std::cout << "                  'ONNNNO:  .o0o:ldOKNNNNNNNNNNNNNNNNX0KNNNNKo.   'xXNNNNNNNNNNNx.   .,'.             ;KNNNNNNNNNNNNNXc                               \n"; Sleep(200);
		std::cout << "                   :KNNNNKo. .d0x, ..ck0XNNNNNNNNNNNNNNNNNNNNXk,   .c0NNNNNNNNNNk.                    .dNNNNNNNNNNNNNXl                               \n"; Sleep(200);
		std::cout << "                   .oXNNNNXk, .dXO;  'kOkOKNNNNNNNNNNNNNNNNNNNNKo.   ,kXNNNNNNNKc                      ,0NNNNNNNNNNNNK:                               \n"; Sleep(200);
		std::cout << "                    .xNNNNNN0: .xXO' .OMN0k0XNNNNNNNNNNNNNNNNNNNNO:.  .ck0000ko,                        lXNNNNNNNNNNXo.                               \n"; Sleep(200);
		std::cout << "                     'ONNNNNNKc.,ONx..dWMMNXK00XNNNNNNNNNNNNNNNNNNKd'    ....                           'kNNNNNNNNNXd.                                \n"; Sleep(200);
		std::cout << "                      :KNNNNNNKc.:KXd.:XMNXWMXkdk0XNNNNNNNNNNNNNNNNN0d;.                                .oNNNNXKOxl,.                                 \n"; Sleep(200);
		std::cout << "                       lKNNNNNNKc.:0Xx:xWXkKMMX00OOO0XXXKKKKXXK0kxxkO0Oxc'                              .ldoc;:ol...                                  \n"; Sleep(200);
		std::cout << "                       .oXNNNNNNKl.,kX0x0O:dWMNKNMWK000OxOKXNNX0xccxKKKK0Okkxo;,cddooool;',cc:;;,;,. .;clodd;.lNO;;,                                  \n"; Sleep(200);
		std::cout << "                        .oXNNNNNNXx;:ONX0o..xNNxkWMMMMMWWWMMMMMMWK0WMMMMMMMMMWK0WMMMMMMMXkONWMWWWWNOxKWMMMMWo'kNl..                                   \n"; Sleep(200);
		std::cout << "                         .lKNNNNNNN0ddKNNKo.,oo';OMMMMMMWKKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNWMMMMMMMWWMMMMMMX:,0O.                                     \n"; Sleep(200);
		std::cout << "                          .cKNNNNNNNXOkKKOdlodxx:lKMMMMMKcc0WMMMW0ONMMMMMMMMMMNXWMMMMMMMMMMMMMMMMWKx0WMMMMMO':k;                                      \n"; Sleep(200);
		std::cout << "                            :0NNNNNNN0doddxO0Okdl;oXMMMNkxK0KWMNOddOXNNNXXXKKOloKNNNNNXXK00KKXXXKkooxXMMMMX:.;,                                       \n"; Sleep(200);
		std::cout << "                             ;ONNNKOkxdxk00Oxddddc'oNMMKkXMWX000XWWKkOXKXXXXX0OXMWWWWKxOXXKxkXWWW0kXxxNMMNo.                                          \n"; Sleep(200);
		std::cout << "                              ,x0OxkOOkOOkxxddlll, .lXM0kNMMMKlxWMMXx0MMMMMMMNXWMMMMMXKNMMW0OWMMWkOWKdOMNo.                                           \n"; Sleep(200);
		std::cout << "                              'lxkOOOkxxxddddodkK0l..,xddXMMMKloXMMKlxNMMMMMNxlKMMMMNOOWMMKoOMMWkcOMX:cOl.                                            \n"; Sleep(200);
		std::cout << "                .'::;.     .;okOOOkxxxxxdxkOKXNNNNN0o;...oNMM0ddxXNkodOWMMNXOooxXMWKdlxNWKocOWKo. lKl  .                                              \n"; Sleep(200);
		std::cout << "             .':dO0Odl' .'cdkOOkxddxddxxO0XNNNNNNNNNNXOo,.:ONKddddlloddOXKkdooddk00xdxxO0xddkkl,. .'.                                                 \n"; Sleep(200);
		std::cout << "             'oxO0KXKOxdxkOOkkddddxdxk0XNNNNNNNNXXNNNNNNKxcckOxkOkkO00KKXXXXXXXXXNNNNNNNXXXXXK0Oxdddol:.                                              \n"; Sleep(200);
		std::cout << "              .,lk00KXKKK0Oxdddddl;'cKNNNNNNNNNNXKOk0XNNNNXK0OOOOkkOKNNNNNNNNNNNNNNNNNXKKK0OOOkxxO0Oxc.                                               \n"; Sleep(200);
		std::cout << "                 ,dxkKXXKOxdddo:.    c0NNNNNNNNNNNKd;:kXNNNNNNXK0kkOKNNNNNNNNNNNNNNNNNNNNNXKKKOkOOxc.                                                 \n"; Sleep(200);
		std::cout << "               .'cdk0KKKKKkdl;.       ;0NNNNNNNNNNNXk;.,lx0XNNNNNNXKK0OkxdoooolllllllloodxkO00K0d;.                                                   \n"; Sleep(200);
		std::cout << "             .,lxOOOkxk0KXK0x:..       ,ONNNNNNNNNNNN0c.  .,::::;,'...                     .....                                                      \n"; Sleep(200);
		std::cout << "          .':oxOkxdoddxk0000kxdl,.      ,ONNNNNNNNNNNNXo.                                                                                             \n"; Sleep(200);
		std::cout << "        .;lxkkkdoodxolxkkkkxdooodl.      'kNNNNNNNNNNNNXk;                                                                                            \n"; Sleep(200);
		std::cout << "     .;cdkOkxoodxdl,.;KWklloodxxdl,       .dXNNNNNNNNNNNNKxc,,;:c:;;,,,,;,.                                                                           \n"; Sleep(200);
		std::cout << "     :ooxxolodxo:.   ;XWOxdlddodxl.        .oKNNNNNNNNNNNNNNXXXNNNXXXXXXXk'                                                                           \n"; Sleep(200);
		std::cout << "      ;c:codxo;.     :NNOKWOox0NMWk.        .lKNNNNNNNNNNNNNNNNNNNNNNNNNXc                                                                            \n"; Sleep(200);
		std::cout << "       .'cdl;.       cNNOXMWNWMMMMWx.         :0NNNNNNNNNNNNNNNNNNNNNNNNK;                                                                            \n"; Sleep(200);
		std::cout << "          .          cNX0XMMMMMMMMMWO,         ,kNNNNNNNNNNNNNNNNNNNNNNN0;                                                                            \n"; Sleep(200);
		std::cout << "                     lNX0NMMMMMMMMMMWKo'        .xXNNNNNNNNNNNNNNNNNNNNNK;                                                                            \n"; Sleep(200);
		std::cout << "                    lNNKNMMMMMMMMMMMMWO;        .oXNNNNNNNNNNNNNNNNNNNNK:                                                                             \n"; Sleep(200);
		std::cout << "                     lNNKNMMMMMMMMMMMMMMXo.       .cKNNNNNNNNNNNNNNNNNNNXl                                                                            \n"; Sleep(200);
		std::cout << "                     lNWNWMMMMMMMMMMMMMMMW0c.       ;ONNNNNNNNNNNNNNNNNNNo                                                                            \n"; Sleep(200);
		std::cout << "                     lWMMMMMMMMMMMMMMMWMMMMNOc.      'xXNNNNNNNNNNNNNNNNNd.                                                                           \n"; Sleep(200);
		std::cout << "                     dWWNWMMMMMMMMMMWkxXMMMMMW0c.     .lKNNNNNNNNNNNNNNNNd.                                                                           \n"; Sleep(200);
		std::cout << "                    .kMXKWMMMMMMMMMNd.cNMMMMMMMNO:.     'xKNNNNNNNNNNNNNK:                                                                            \n"; Sleep(200);
		std::cout << "                    '0W0KMMMMMMMMWKc..kMMMMMMMMMMNk;.     ,oOXNNNNNNNNNN0;                                                                            \n"; Sleep(200);
		std::cout << "                    :XXOXMMMMMMMWO,  ,KMMMMMMMMMMMMNOl'     .,lkKXNNNNX0x;                                                                            \n"; Sleep(200);
		std::cout << "                   .dNOOWMMMMMMM0;  .dWMMMMMMMMMMMMMMWXx;.      .;:::;'.                     .;lxkd;.                                                 \n"; Sleep(200);
		std::cout << "                   '0XkKMMMMMMMWd. .oNMMMMMMMMMMMMMMMMMMNOdc'.                          .,cdOXWMMMMW0o'                                               \n"; Sleep(200);
		std::cout << "                   lXOkWMMMMMMMWo .oNWWMMMMMMMMMMMWWNXXXNWMWXKOl.                 .':lxOXNWMMMMMMMMMMWO,                                              \n"; Sleep(200);
		std::cout << "                  .OXkKMMMMMMMMNl'oOOKWMMMMMMMW0dllx0XNNX0xlco0Nk.              :kKNWWXKKXKOkXWMMN00NMWKo.                                            \n"; Sleep(200);
		std::cout << "                  :X0OWMMMMMMMMXOd:,dNMMMMMMW0dllx0KKko:'.    ;KNd.            ,KWOdk0XK0kkd;,dXMWO;;kNW0:                                            \n"; Sleep(200);
		std::cout << "                 .xXO0MMMMWXXXXXx. ;XMMMMMWXOOKXOo:'.   ....   'x0:           'kWXc  .':dkxxOOxkKWNl  ,xXx.                                           \n"; Sleep(200);
		std::cout << "                 ,0KkXMMWK0KXXKO: 'OWMMMMN0OKXx,.    ..'''''..  .;,.         ,OWW0;      .cxk0NWNWMXc   ;l.                                           \n"; Sleep(200);
		std::cout << "                 cNK0NMNOONMMMMM0cxWMMMWKO0NO;     .''''''''........''........cdd'         .d00XWMMMO'   .''.                                         \n"; Sleep(200);
		std::cout << "                .dW00WMKxXMMMMMW0ONMMMN00XXd.     ..''''''.....''''''''''''''.....          .dXKKNMMWk,  :KN0o'                                       \n"; Sleep(200);
		std::cout << "                .kNkOMMNOKWMMMWKOXMMNK0XN0:        ..''''....'''''''''''''''''''''..         .cKK0KWMMXo,xWMMMXl.                                     \n"; Sleep(200);
		std::cout << "                .k0dKMMMNK0KNMNXNMNK0XN0c.    ..........''''''''''''''''''''''''''''...        ,kXK0XWMWKkKWMMMWKl.                                   \n"; Sleep(200);
		std::cout << "                .x0o0MMMMMWWWMMWNKKK0x;.     ..''''.....'''''''''''''''''''''''''''''''..       .c0NK00XWNK0XWMMMK;                                   \n"; Sleep(200);
		std::cout << "                 oN00WMMMMMMMWNKKKOc.         .''''....''''''''''''''''''''''''''''''''..         .ckK0OOKNNKKKXN0;                                   \n"; Sleep(200);
		std::cout << "                 ;KMWNXXXXNWMWNKx;.           ..''...'''''''''''''''''''''''''''''''''..             ,oO0OO0KXXKOc.                                   \n"; Sleep(200);
		std::cout << "                 .lXWWWWWWWNKkl'                ....'''''''''''''''''''''''''''''''''..                .,oOKKKKK0o.                                   \n"; Sleep(200);
		std::cout << "                   'cdddoc;'.                     .''''''''''''''''''''''''''''''''''.                    .,oOXXKOl.                                  \n"; Sleep(200);
		std::cout << "                                                  .'''''''''''''''''''''''''''''''''..                       .lKWMK; 				                    \n"; Sleep(200);
		std::cout<<"- Who dares to wake me up?\n"
"Our hero, started to introduce himself, and after telling his story, and all the tough time he got through, Vlad exclamed\n"
"- Oh, I know exactly who you are, so the myths where true! I will help you end the prophety\n"
"- I tried so manny times to kill your bastard father, but he is to strong for me, but together, we can get to end his life\n"
"- (DG) wait? Myy father? What are you trying to say?\n"
"- There is no time to waste, come, I know where to find Natas\n"
"After walking through a underground tunnel, they both got to Natas's castel, and Vlad started to shout:\n"
"-Where are you hidding you F^3k!^6 RAT????\n"
"-(N) Ah my friends, welcom to Hell!!!\n"
"I was waiting for you, hmm, I see that you bring a friend with you, my son\n"
"-(V) Enough talking, it's time for me to revenge my people, it's time for the prophecy to be completed\n"
"Your time has come, my dear Rat firend\n"
"Vlad, made an ancient spell, using his companion blood, combined with his\n"
"After trowingh the cursed spell on Natas, his health drop to 50%, but same on the other side\n"
"The spell is named Change of Hearth, where you combine cursed blood, with angelic blood, creating a verry powerful attack, but this cost half of his user's health, and also half of the health of angelic blood's possesor\n"
"\n Press anithing to continue... \n";
	std::string random2;
	std::cin.ignore();
	std::cin >> random2;
}

void EndGame()
{
	std::cout << "Press anithing to continue... \n";
	std::string random;
	std::cin.ignore();
	std::cin >> random;

	system("cls");
	std::cout <<
		"                                                                                ...                                                                                                                     \n"
		"                                                                           .',:cccc;'....                                                                                                               \n"
		"                                                                       .';,,'''',;clloolc,.                                                                                                             \n"
		"                                                                   .';lxo'  ..    .;k0Okxl,.                                                                                                            \n"
		"                                                                 .,cdk0O,  ..   ..  ,OKkc.  ...                                                                                                         \n"
		"                                                                .,coxkOx. ...,;'... .;;. .;loc,.                                                                                                     .  \n"
		"                        ...       ...       ..                  .;cdkOKKc .;ok0d;'.  .'cx0KOkoc'                                                                                                     .. \n"
		"                       ..        ...    .....                   .;lxO0KK0d:;cll;. .,cx0KK00Oxoc,                                                                                                     .. \n"
		"                               .....  .....    .:l;.             .:dxkOOkxl;.  .,cdxkkOOOOkxdo:.                                                                                                      . \n"
		"                              ..'.........   .ckOOOxl,.           .';;;;'.    ..'..',,,;;;;;,'.                                                                                        .              ..\n"
		"                              .''...........:xOOOOkxkOdc,.                                                                                                                             ..    .        ..\n"
		"                             .'''''.......,oOOOOOOOxlcclol;.                                                                                                                           ..    .         .\n"
		"                             ',,''......':xOOOOOOOOOOo'  ...                                                                            .                                             .'    ..         .\n"
		"                            .',,'.''..'':kOOOOOOOOOOOOkl;'..                                                                         .;:.      ..                                     ''    ..         .\n"
		"                          ...,,'.';c,'.;x0OOOOxdoolllllccc;,'.                                                        .':;.      .,cdxl.      ..       ..                            .,'    ..         .\n"
		"                        .':;',''.'ll'.'oOOOOOkxdolc:;'..     .      ...',,,'...                                ..,,;:ldkOl.   .;lxO0x,      ,;..      ..                             .;.   .,.         .\n"
		"                 ...  .':xk:,,'':cc:'.:kOOOOOOOOOOOOOkdllllc:;,,;;::;::;;,..                               .':ldxdooxO0OOc..,lxOO0kc.    .cdOo.       ..                            .,:. . .;. . ....  .\n"
		"              ..',...'cokKx,'''lkdc,..lOOOOOOOOOOOOOOOkkOOOkkkkkkkxxdddddc'.                           .;cdxdl;'.   .,dOOocxOOOOOo'    .:k0K0c.      .'.                  ..        .:;....';...........\n"
		"          ..'',;,'';ox0xxKd''':k0xc,.'d0OOOOOOOOOOOOOOOOOO00000000000ko:'                        .';clxkxl;.          .lOxk0OOOd;    .cx000Kx,      .''.              ......     ...,:'....;;...........\n"
		"      ...'''',;,.;x0KKKkdOd,',d00xc;',x0OOOOOOOOOOOOOOO0O00000000Odc,.                       .,:okOkxo:.               'xxx0Ox;.   'lk000000l.     ..''.        .........'..........:;.....:,...........\n"
		"  ..',,'...','.. 'OKKKKOlxd,.:O00xccc:d0000OOOOOOOOO0000000000kl:.                     ..,:lxk00ko;..                  .dkxd;.  .;oO000000Kx,     .;,,'.       .........',.........;c,....,:............\n"
		"',,'........     .oKKKKKocd;.l000kookxxO0000OO0O0000000000kdc,.                   .';coxOO000Oo;.                      .cc.. .;lkO0O000000O:.    .xx;'.        ........';.........,c;'....:;............\n"
		";'.   ...         'kXKKKO:;,.,ok0kxkO0O00kooxk000000000kl;.                 ..,:ldkOOO0OOOOd:.                           ..;lkOOOOO000000Ol.    .xKO:'.          .... .;'........'c;'....,:'............\n"
		";'.                ;OKKKKd,....,:cx00000x'  ..,:lxO0ko,.              ..,:ldxkOOOOOOOOOOxl,.                            'cx0OOOOOOO00OO0Ol.    'xKK0o.              ..;,. ......'::......:;.............\n"
		":'...               :0KKK0o'. ....o00000:  ..    .',.             .':ldkOOOOOOOOOOOOOkd:.          ......              .:dk0O0OOOOOOOOOOl.    ,kKKKKd.              .;;.      .'::..'. .;:'............'\n"
		";...... .            ;OKKK0l.. ...l00000: ...                ..;coxOOOOOOOOOOOOkOkxo:'       ..';l:cxloo.              .cdO0OOOOOOOOOOOc.   .:k00KKKo.             .;;.      .'::. .'..':,..........'..'\n"
		"'..........           'xKKKOc.   .:O0000c..;l.           ..;lxOOOOOOOOOOOOOOOkkkkkxoc;.    .,ldoddlodxkxc. ..   ..     .cx0OOOOOOOOOOk:    .oO000KKKl.            .;;.      .,:;. .'...:;...........,..'\n"
		".............          .o0KKOc.   ,OK00Kd..''        .':clxO0OOOOOOOOOOOkkkkkkkkkkOOOOkdc'..:xkdxddxxO0Oo.....,cc.     'lk0OOOOOOOOOd'   .;xO00000K0c            .;;.      .,:;. .''..;;...........,;''.\n"
		"'..............         .:kKKOl.. 'xK00Kk,          .:k00OO00OOOOOOOOOOkkkkkkkkkOOOOOOOOOkd:',dkkkk00000x:'.ckxdo,    .,oO0OOOOOOOkl.   'oOO000000Kx.           .;;.      .;:,.  .'..,;.........'..;:;'.\n"
		"'....'...........        .,o0K0o'..d00Oo'       .:o:. .:oxkOOOOOOOOOOOOOOkkkkkkOOOOOOOOOOOOOkc;cxO000000O:.l0Odod:.    ,x0OOOOOOOx;   'lkOOO0OO000O:           .;,.     .';;.   .'..,;..........,.'::,..\n"
		"'....,'...........       ,o;:kK0l'.l0d,      .:l;l00d,  ..;lxkOOOOOOOOOOOOOkkkkkOOOOOOOOOOOO00kl:ck0000Oc,d0OxxkO:    .lOOOOOOOkl.  'cxOOOOOOO0000o.          .,.      .,;'..  .'..';.  . .....',.,:'...\n"
		",...,,'...........      .lKx'.lO0l.,;.     .,d00dck00Oc.   ..;codxkkkkkkOOkkkxxdoollllllllllllool,'coxkock0000Oxl.  ..ckOOOOOko,..,lkkkOOOOOOOOO0d'         .''.     .','.  ......',.     .....,..;'....\n"
		",..,,,,............     .xX0l'.;dx;      .ckkk00Oxk00OOc       .',;clodxkkxdollc::;;,,,,''............';ldoolc;,'',cokOOOOOkl,.,cdkOkkOOOOOOOOOOx,         .'.      .,,.     .'..'.        ...,;.,,.....\n"
		",'',,,,'...........     ;0X0kd,..'.     ;x0000000000O00x'    .      .......''..'''''''',,,,,,,,,,,,,,,'.......,ldkO0OOOOkdl::lxkkkkkkkkOOOOOOOOx,        ...      .':c.      .'...           .;,',......\n"
		",,,,,,,'...........    .oKK0kOx'      .oO00000000OOOOOOO:.. .:c:,..',,:cc:;. ....'.....    ......'';;;::;;,,,..,lx00OkkxdodxOOkkkkkkkkkkOOOOOOd,        ..      .':dd,      ','.            .;;''. .....\n"
		",,,,;,,,...........    .xXKKkkKl.    'x000000000OOOOOOOOd'.'':oOXd:loxXMMMWOcclo0XK00Okc,,,,;c::;,'.......';:;;,,;codxkOOOOOOOOOOOkkkkOOOOOkxc.       ..      ..;oOx.     .''.              ':;..  .....\n"
		",,;;;,;,........... ...,OXKKkxk,     ;O000000OOOOOOOOOOOOc.;l:lkNd.,ldKMMMM0:;lxXMMMW0d:,lod0WMMWNKl'',,,',,....',,,:coxkOOOOOOOOOOOOOOOOOko,.     ...      .':oO0o.     ...    .          .:;.         \n"
		",,;;;;,,'.......... .;'cKKKKkl;   .:,.o00000OOOOOOOOOOOOOkc.:dlod';o::xXWMNl,c:c0WW0ddKKl;ldKMMMW0l' 'lodONX0koc'. ..''';ldkOOOOOOOOOOOOOd:.     ..      ..;ok0Oo,      ..       .        .;,.          \n"
		",,;;;;,,'..'....... 'o:oKKKKx'   .d0o.,k0O00OOOOOOOOOOO00OOl,cdl,'oKKdcl0WO:xN0loOklkWMMNd;lOWW0xdko;.'oxXMMMMMWd,:l;......;oxkOOOOOOOkd:..    ..     ... .:ol:.                 ..      .,.            \n"
		";;;;;,,,'..'....... ,kdxKKKKd.  'x00x..lO00000OO0OOOOOkkO00Oxclo,;oxXWXxodlckXMWkclxXMMMMWd';ldxKWW0d;.:OWMMWNKk,,0MW0l,.. ..,lxxkOOxo;..    .       'l:.                         ..    .'.             \n"
		";,,,,,,,'.','...... ,OOkKKKKl. 'x000O; .d000000O0OOO00kook000Odoc;cokXWMWx;cd0WWOclxKMMMMMNl ;KWMMNOol'.lKXXXXXXo.dWMMKdl;''. .,cll:,...        ..  'oc.                          ..  ...               \n"
		"''''''''........... ;0K0KKK0: .d00000l. ,x0000000000000Ol;ok000kxo,,:oOKk:.':xKO;.':dXWMMNOc.lXMMNOdoo:.cKNNMMMXd';KMXkoc,lK0c. .......    ....::. ;o;.                            ....                 \n"
		"....................:0KKKKOl..:x00000d' .:k0000000000000Ol,;lxO000x;',:llccccoxoc::ccd00kl;'..ckkoc::;':0MMMMWNkdc.cOddxc..xkl,........':coxdoxo..ld,                              ..                   \n"
		".................',,l0KKKx:'.'dx00000k;  .lO0000000000000Oo'',:dO00kocclooooooddxkO0000OOkkxddoolc:;,'.'lKWMN0xooo,'d0X0o'.......;:;cdkOOOOOOOo,:xl.                                ..                  \n"
		"............,cxd:'..cKK0d;''.:kxOK000Oc.  .oO00000000000000o,.'';ldkOkkkxddddooodxkkkOO000000000000OOkxdookkdlllc;,xKKOo:,... .:oxxkO0OOO000kc:dx:.  .                              ..                  \n"
		"........':dkOxl, ..lK0l, ''''o0xk00000d'   'o000000000000000d, ..''',;;;,,,,,,,;;;::cllodxxkOO00000000000kdocc:;,...;k0kl:'... : oxxk0OO0OO00Odcoko'   ..                              ..               \n"
		".....'cxOko;.      .x0l''''.;k0xx00000k;.   ,d000000000000000o,'........................'',,;:clodxkO000Okdolc;,'...',,...,cdkkO0OOOO0O0Okookkc.  ...                                .                  \n"
		"...:dkxc'.         ,ko'.....l00kdO0000Ol.   .,d00000000000000Oc''.................................',;;:lodk000Oxoc:;,,;;cdOOO0OklcdkOOOOxxkOo,..''..                                 .                  \n"
		"'lkkc'.            cd,.....,x00Odk00000o'.   .,d000000000000Oxl:;;,'''''''',,,''''''''....................';:coxO000OO00000Oxl:,;oO0OOOOOOx:. .ckc..                                 .                  \n"
		"KNx.              .l:......lO000xx00000x,.    .,o00000000000OkO0Okdoc;,,,,'',,'''''''''''''''''................',:lodkkkdoc;..;oOOOO0OOOkl'. .o00o.                                  .                  \n"
		"Mk.               ':'.....,k0000kdO0000k:..    .,oO000000000000000KK0kdc;,,,,,,,''','''''''''''''''''''''............,,'...'cxO0OOOOOOOo,.  .cO0Kd.                                  .                  \n"
		"Wo                ''......l00000kdx0000O:..     .'lO0000000000000KK0KKK0kl;,,,,,,',,'''''''''''''''''''''''''.....   ....'oO000000OOOx:.    ;k000xol.                                .                  \n"
		"Wd.               .......'x00000kld0000Oc..      .'lO0000000000000000KKKKKx:,,','''''''''''''''''''''''''''''..'....   ..cO0O0000OOOx,.    .o00Kkok0o.                               .                  \n";

	std::cout << "After defeating Natas, the DemiGod started screaming in pain, because his helper just died\n"
		"NO,NO,NO,NO, it can't be real!\n"
		"But with his last breath Natas started to explain all of his destiny\n"
		"-Don't cry son, that was his destiny, and like him I will pass away\n"
		"-You are myy creation, I created you and gave you to a wise man who can teach you to fight!\n"
		"-I knew he will prepare you for this day!\n"
		"-Your destiny was to kill me and become a hero, a good Ruler of the word, you are my descendent and you will take my trhone\n"
		"-After so many years of fear and darkness, the Earth will be a better place\n"
		"-Long time ago, i realise my mistakes, i realise that my cold heart was poison by the fake truths of Anatos, my brother\n"
		"-I tried to correct my mistakes but he and his horde stand between me and my real nature\n"
		"-So this is how ,in secret , I have created you, I blessed you with my powers, and wisdom\n"
		"-I was in your shadow all your life, and I sent you a guide, to heal your wounds, and to keep you safe\n"
		"-Raphaela, once a daemon, took my side after i explain my plan, and now she became an angel\n"
		"-Using all his daemonic powers in the name of love and pace\n"
		"-I am sorry son, but i know that you wont make my mistakes again and you will take care of this place, named Earth\n"
		"And he passes away, letting his human form behind, and a ghost like shape, pale white and transparent, rounded around the DemiGod 3 times after dissapearing\n"
		"Torn by an interior pain, he kneel down, near his real father corpse and start screaming \"Father, oh my Father\" \n"
		"\n"
		"Some time after this, the DemiGod took his father throne, and ruled the world with his father's words in mind, driven by love and peace\n\n"
		"888b     d888               888               888                    8888888888       888 d8b                .d88888b.  888                               \n"
		"8888b   d8888               888               888                    888              888 Y8P               d88P\" \"Y88b 888                               \n"
		"88888b.d88888               888               888                    888              888                   888     888 888                               \n"
		"888Y88888P888  8888b.   .d88888  .d88b.       88888b.  888  888      8888888  .d88b.  888 888 888  888      888     888 888888  8888b.  888  888  8888b.  \n"
		"888 Y888P 888     \"88b d88\" 888 d8P  Y8b      888 \"88b 888  888      888     d8P  Y8b 888 888 `Y8bd8P'      888     888 888        \"88b 888  888     \"88b \n"
		"888  Y8P  888 .d888888 888  888 88888888      888  888 888  888      888     88888888 888 888   X88K        888     888 888    .d888888 Y88  88P .d888888 \n"
		"888   \"   888 888  888 Y88b 888 Y8b.          888 d88P Y88b 888      888     Y8b.     888 888 .d8\"\"8b.      Y88b. .d88P Y88b.  888  888  Y8bd8P  888  888 \n"
		"888       888 \"Y888888  \"Y88888  \"Y8888       88888P\"   \"Y88888      888      \"Y8888  888 888 888  888       \"Y88888P\"   \"Y888 \"Y888888   Y88P   \"Y888888 \n"
		"                                                            888                                                                                           \n"
		"                                                       Y8b d88P                                                                                           \n"
		"                                                        \"Y88P\"                                                                                            \n";
	std::string done;
	std::cin >> done;
}

void EndGameFight(Player* player, Enemy* enemy, std::shared_ptr<Enemy> Vlad)
{
	int sideCharacterHealth, mainCharacterHealth, sideCharacterAttack, mainCharacterAttack, enemyHealth, enemyAttack;
	sideCharacterAttack = Vlad->Attack();
	sideCharacterHealth = Vlad ->getHealth()/2;
	mainCharacterAttack = player->Attack();
	mainCharacterHealth = player->getHealth()/2;
	enemyAttack = enemy->Attack();
	enemyHealth = enemy->getHealth()/2;
	int i = 0;
	do
	{
		if (sideCharacterHealth <= 0)
		{
			if (mainCharacterHealth <= 0)
				break;
			else
			{
				do
				{
					enemyHealth -= mainCharacterAttack;
					std::cout << "Enemy's health after DemiGod's attack: " << enemyHealth << std::endl; Sleep(50);
					if (enemyHealth <= 0)
						break;
					mainCharacterHealth -= enemyAttack;
					std::cout << "DemiGod Health after Natas's attack: " << mainCharacterHealth << std::endl; 
					i++;
					if (mainCharacterHealth <= 0)
						break;
				} while (enemyHealth >= 0 && mainCharacterHealth >= 0);
			}
		}
		else
		{
			do {
				enemyHealth -= sideCharacterAttack;
				std::cout << "Natas's health after Vlad the Impaler's attack: " << enemyHealth << std::endl;

				if (enemyHealth <= 0)
					break;
				
				enemyHealth -= mainCharacterAttack;
				std::cout << "Natas's health after DemiGod's attack: " << enemyHealth << std::endl;

				if (enemyHealth <= 0)
					break;
				sideCharacterHealth -= enemyAttack;
				std::cout << "Vlad the Impaler's Health after Natas's attack: " << sideCharacterHealth << std::endl; Sleep(50);
				i++;
				if (sideCharacterHealth <= 0)
					break;
			} while (enemyHealth > 0 && sideCharacterHealth > 0);
		}



	} while (enemyHealth >= 0 && mainCharacterHealth >= 0);
	if (mainCharacterHealth <= 0)
	{
		deadArt();
	}
	else
	{
		EndGame();
	}
}
