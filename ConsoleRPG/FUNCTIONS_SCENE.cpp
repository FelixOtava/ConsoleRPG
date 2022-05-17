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
	std::cout << "After having a vision of his real father, the OwlGod, " << name << " had a revelation about his ture nature.\n";
	std::cout << "All this time he felt different and more powerfull than the others, but he never knew that the reason of his inhuman capacityes was him beying a DemiGod.\n";
	std::cout << "He spoke with Sirius about the vision, and about his destiny, and at that moment Sirius froze, his face frowning angrily, but also shocked.\n";
	std::cout << "-I have to fulfill my destiny,he said, you trained me well father, but now is time for me to go and end what my real father started,\n";
	std::cout << "-I will protect you and mom from that evil creature Natas, I will save the world.\n";
	std::cout << "When Sirius heard all of his stepson speech, a little smile show on the edge of his lips:\n";
	std::cout << "-Then go and end the suffer from the world!\n";
	std::cout << "So in the end, "<<name<<" left Scrapsland and begin his jurney to kill Natas and his brother Anatos.\n";
	std::cout << std::endl;
	std::cout << "Somewere on his road, the DemiGod,found himself on a crossroad of 3 roads.\n";
	std::cout << "The left one leads to BurkPalace, a town well known for its coruption and high crime rate.\n";
	std::cout << "The middle one leads to The Forest of the Hanged, called like this for obvious reasons.\n";
	std::cout << "And the last road leads to Carpathian Mountains, in this mountains Anatos and his horde of vampires are rumored to be ghosting around.\n";
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
			goOn = false;
			ans = 2;
			system("cls");
			break;
		case 3:
			goOn = false;
			ans = 3;
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

void SceneEquiping()
{
	std::cout << "You got some some good stuff in that chest, seems like your father let them here for you to find out\n"
		"I will help you and autoequip them, but for the next time you will be able to equip/unequip the items you want\n";
	
	
}









