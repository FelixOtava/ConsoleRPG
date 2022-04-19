#include"Warrior.h"
#include "Wizard.h"
int main()
{
	std::cout << "		,_.                                                          ,_.\n";
	std::cout << "		'\\cXX.==- __                                        __ -==,XXv/`\n";
	std::cout << "		    ~=_X7~ ,/~!g=-,_.                      ,_.-=s!~L. ~TX_=~\n";
	std::cout << "		       ~=c. = /- T--e'T|=v._  ....   _,v=!7`z--\\ -\\ = ,v=~ \n";
	std::cout << "		          ~=c` ./ ,-`,/ /i/Z\\/~~~~\\/Z\\i\\ \\.'-. \, 'v=~\n";
	std::cout << "		             ~\\s,/ ,/ ,/ Y]`/ @/\\@ \\'[Y \\. \\. \\.g/~\n";
	std::cout << "		                '`Yc.v`,/Vs)-  \\/  -(sV\\.'c,v+'`\n";
	std::cout << "		                     ~~]mZczTV '` VTevZm[~~\n";
	std::cout << "		                  ,=-T|--2Y [      ] Y2--!T-=.\n";
	std::cout << "		                  'i`_ -|-'i!      !i`-!- _'i`\n";
	std::cout << "		                    '-s|.cf ,!]\/[!. 1v,!g-`\n";
	std::cout << "		                        ~Y/v/vv..vv\\v\\Y~\n";
	std::cout << "		                         ^            ^\n";
	std::cout << "At the beginning of time the mighty owl god fought for the freedom of the mankind with his rival Natas the lord of the dark.\n";
	std::cout << "		Natas, helped by his brother, Anatos, and his horde of demons manage to defeat the OwlGod.\n";
	std::cout << "   After his victory, Natas took human form, and descended on Earth, to rule it with his immortality and demonic power.\n";
	std::cout << "Before he got trapped in a chest sealed by malephic curse, the OwlGod succeeded to create a deadly warrior from his left eye.\n";
	std::cout << "         The legend says that he or she, will conquer the earth and will release it form the evil and misery.\n";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Are you worthy enough to enter the dangerous world of Natas?\n";
	std::cout << "Press 1 for Hell Yea !   ///////   Press 2 for running away like a scarry cat \n";
	int answer;
	bool gameOn;
	std::cin >> answer;
	switch (answer) {
	case 1: 
		gameOn = true;
		break;
	case 2:
		gameOn = false;
		break;
	default:
		std::cout << "Wrong key, try again\n";
		break;
	}

	
}