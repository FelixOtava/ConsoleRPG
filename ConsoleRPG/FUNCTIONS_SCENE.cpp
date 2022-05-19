#include "FUNCTIONS_SCENE.h"

bool IntroScene1()
{
	PlaySound(TEXT("Main_Menu.wav"), NULL, SND_ASYNC | SND_NOSTOP | SND_LOOP);
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
	PlaySound(TEXT("Exploring.wav"), NULL, SND_ASYNC | SND_NOSTOP| SND_LOOP);
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

void SceneEquiping(Player * player)
{
	std::cout << "You got some good stuff in that chest, seems like your father let them here for you to find out\n"
		"I will help you and autoequip them, but for the next time you will be able to equip/unequip the items you want\n\n";
	player->PrintInventory();
	std::cout << "\n Up there is your inventory, you can see your items, theirs stats, and the status (equiped/unequiped)\n"
		"And donw here is your stats, you can see stats like Healts, AttackPower and so on, this will be usefoul in the future\n\n";
	player->PrintStats();
	std::cout << "Press any key to continue...\n";
	std::string random;
	std::cin.ignore();
	std::cin >> random;
	
}

void SceneTheCity(Player *player)
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
		"In few seconds, "<<player->getPlayerName()<<" catches the thief, who struggle to escape.\n"
		"Seems like you need to fight the thief, because his intentions are to cut your heart out of the chest with your own sword;\n"
		"All of this being said, a duel had begun.\n";
		player->unequipItem(1);
		player->DecreaseStats(1);
		std::cout << "Press any key to continue...\n";
		std::string random;
		std::cin.ignore();
		std::cin >> random;
}

void FightScene(Player* player, Enemy* enemy)
{
	system("cls");
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("BattleFinal.wav"), NULL, SND_ASYNC | SND_NOSTOP | SND_LOOP);
	int playerAttack, enemyAttack, playerHealth, enemyHealth;
	playerAttack = player->Attack();
	enemyAttack = enemy->Attack();
	playerHealth = player->getHealth();
	enemyHealth = enemy->getHealth();
	do
	{
		enemyHealth -= playerAttack;
		std::cout <<"Enemy's health after you have attacked: " << enemyHealth << std::endl;
		Sleep(300);
		if (enemyHealth <= 0)
			break;
		playerHealth -= enemyAttack;
		std::cout <<"Your health after Enemy have attacked: " << playerHealth << std::endl;
		Sleep(300);
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
	default:
		std::cout << "You really can't get here\n";
		return Enemy;
	}
}

bool RestCity()
{
	system("cls");
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("Exploring.wav"), NULL, SND_ASYNC | SND_NOSTOP | SND_LOOP);
	std::cout << "After getting rid of the thief, and recovered his weapon, the DemiGod continued his jurney to the city\n"
		"Once there he descover the real misery of the city, and his stinky streets.\n"
		"Screams everywhere, some of them comes from peasants trying to sell their goods, another one comes from people who fight in the middle of street,\n"
		"another screams came from women who try to escape being raped and so on...\n"
		"Is not a good place to stay the night, and also its a risc to be robbed, but in your condition is not a great idea to keep on walking\n"
		"Maybe try to find a place to stay and recover and in the morning you can continue your jurney, at the end of the day if you want to fight Natas you need to be well rest and in a good shape..."
		"and also night can harm the harmony\n"
		"Or maybe you want to continue, who am I to tell you what to do?\n\n"
		"Press 1 to seek for a place <<<--->>> Press 2 to continue your jurney\n";
	int answer;
	std::cin >> answer;
	bool goOn;
	do
	{
		switch (answer)
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

void RestCityRefuse()
{
	system("cls");
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("BattleFinal.wav"), NULL, SND_ASYNC | SND_NOSTOP | SND_LOOP);
	std::cout << "Preety well, so our Hero chooses to see his way\n"
		"He left the city, with his wounds untreadet. On his way he left a short blood trail behind him.\n"
		"The dark has fallen\n"
		"After a few hours of walking in the dark, the DemiGod started to hear some rustling around him.\n"
		"His mind was prepare for the fight, but his body was not.\n"
		"Few minutes after hearing noises in the bushes, Anatos was facing him...\n"
		"He and other 2 daemon, Comanders of his horde\n\n"
		"Now, you can think, i reall don't want to say 'I told you to' I also let u a hidden message, remember ?\n"
		"\"and also night can harm the harmony\"\n"
		"Yea, it's obvious that you died, but don't be sad, i prepare a tombstone for you\n"
		"        _.---,._,'\n"
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
		"Just to feel better \\^_^/\n"
		"GAME OVER";
}









