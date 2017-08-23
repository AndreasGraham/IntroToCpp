#include "gameStructs.h"
#include <iostream>

void Attack(Monstero &A, Monstero &B) {
	if (B.HP < 50) {
		B.Dfs = B.Dfs + B.Heart;
		A.Power = A.Power*A.Brutality;
	}

	B.HP = B.HP - (A.Power - B.Dfs);
}

bool Combat(Player &Hero, Player &Villain) {
	//std::cout << "we did not reach the whilel loop" << std::endl;
	while (true) {
		//std::cout << "We made it into the function" << std::endl;
		if (Hero.m.Spd > Villain.m.Spd) {
			Attack(Hero.m, Villain.m);
			if (Villain.m.HP <= 0) {
				std::cout << "YOU ARE VICTORIOUS. Your class rank has increased and more people will try to fuck you up!" << std::endl;
				return false;
			}
			Attack(Villain.m, Hero.m);
		}
		else if (Villain.m.Spd > Hero.m.Spd) {
			Attack(Villain.m, Hero.m);
			if (Hero.m.HP <= 0) {
				std::cout << "You have been defeated, no one loves you and Juliet is dead" << std::endl;
				return false;
			}
			Attack(Hero.m, Villain.m);
		}
		std::cout << "H1: " << Hero.m.HP << std::endl;
		std::cout << "H2: " << Villain.m.HP << std::endl;
		if (Hero.m.HP <= 0) {
			std::cout << "You have been defeated, no one loves you and Juliet is dead" << std::endl;
			return false;
		}
		else if (Villain.m.HP <= 0) {
			std::cout << "YOU ARE VICTORIOUS. Your class rank has increased and more people will try to fuck you up!" << std::endl;
			return false;
		}
	}
}