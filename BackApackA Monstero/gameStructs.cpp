#include "gameStructs.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void Attack(Monstero &A, Monstero &B) {
	if (B.HP < 50) {
		B.Dfs = B.Dfs + B.Heart;
		A.Power = A.Power*A.Brutality;
	}
	
	B.HP = B.HP - (A.Power - B.Dfs);

	std::cout << "Attack successful"<< std::endl;
}


void Love(Monstero &A) { // possibly make love reduce brutality, or make a move called LoveThyNeighbor which greatly reduces the enemies brutality, increases ones heart,
	float oldHeart = A.Heart;
	
	A.Heart = A.Heart + 3;
	std::cout << "Monstero feels love! Its heart stat was boosted!" << oldHeart << "-->" << A.Heart << std::endl;
}



void Kindness(Monstero &A) {
	float oldDefense = A.Dfs;
	A.Dfs += 3;
	std::cout << "Monstero is kind! Its defense stat was boosted by 3!" << oldDefense << "-->" << A.Dfs << std::endl;
}

void Soul(Monstero &A) {
	float oldHealth = A.HP;
	A.HP += 20;
	std::cout << "Monstero ate soul food! Its HP was boosted by 20!" << oldHealth << "-->" << A.HP << std::endl;
}

void Peace(Monstero &A, Monstero &B) {
	A.Spd += 2;
	if (B.Brutality < 5) {
		B.Brutality -= 1;
	}
}

void Focus(Monstero &A) {
	float oldPower = A.Power;
	A.Power += 4;
	std::cout << "Monstero Focused! Its strength has increased!" << oldPower << "-->" << A.Power << std::endl;
}

void Patience(Monstero &A) {
	// possibly effects enemy, patience causes enemy to miss or become impatient (reflect that somehow)
	// Player loses thier next turn but their spd is buffed greater
	A.Spd += 6;
}

void Confidence(Monstero &A) {
	A.Power = A.Power*1.20;
	//A.Heart += 1;
	A.Dfs = A.Dfs*1.20;

	std::cout << "Power and Defense were increased by 20%!" << std::endl;
}

void Jealousy(Monstero &A) {
	//A.Brutality += 0.25;
	A.Heart -= 3;
	// lets the caster acquire the enemies passive ability
}
void Anxiety(Monstero &A) {
	A.Spd += 6;
	A.Dfs -= 3;
	//possibly miss a turn?
}

void Depression(Monstero &A) {
	// maybe call these a thing like, Ditch, and ditching someone causes depression, which lowers their stat
	// Maybe was Ditched! She is depressed! then display stats
	A.Dfs += 6;
	A.Spd -= 3;
}

void Fear(Monstero &A) {
	A.Dfs += 4;
	// next turn is lost
}

void Hate(Monstero &A) {
	// player gains an extra turn or save for blind rage? yea save for blind rage
	A.Power += 6;
	A.Brutality += 1;
	A.HP -= 25;
}

void CalmMeditation(Monstero &A) {
	// possibilities
	//player loses three turns in a row but their stats are doubled
	// player loses the next two turns. 10 moves after the battle has begun all stats are doubled. Trippled if health is below 25

}

void EgoBoost(Monstero &A) {
	// grants a small power boost every turn, which means you need this function to continuously be called, which means it needs a timer etc
	// if the power stat becomes greater than 15, the player then loses 5 health for every turn
}

void Obesity(Monstero &A) {
	A.Spd = A.Spd / 1.5;
	A.Heart = A.Heart / 1.5;

	A.Power = A.Power * 1.5;
	A.Dfs = A.Dfs * 1.5;
}

void InsultClothes(Monstero &A, Monstero &B) {
	A.Heart -=3;
	B.Dfs -= 3;
}

void turnCheck1(int a, Monstero &A, Monstero &B) {
	while(A.turns == 0)
	srand(a);
	if (A.Spd >= B.Spd * 2) {
		if (rng()*A.Spd > 37) {
			A.turns = 1;
			std::cout << "You Attack again! Sly Cooper!" << std::endl;
		}
	}
}

void turnCheck2(int a, Monstero &A, Monstero &B) {
	while (A.turns == 0)
		srand(a);
	if (A.Spd >= B.Spd * 2) {
		if (rng()*A.Spd > 73) {
			A.turns = 1;
			std::cout << "You Attack again! Sly Cooper!" << std::endl;
		}
	}
}

void villainTurnCheck1(Monstero &A, Monstero &B) {
		//srand(a);
	std::cout << "tities" << std::endl;

	if (A.Spd >= B.Spd * 2) {
		Attack(A, B);
			//std::cout << "You Attack again! Sly Cooper!" << std::endl;
			//return false;
		}
	}


void villainTurnCheck2(int a, Monstero &A, Monstero &B) {
	//srand(a);
	std::cout << "made it past turns set to 0" << std::endl;
	if (A.Spd >= B.Spd * 2) {
		if (rng()*A.Spd > 75) {
			A.turns = 1;
			std::cout << "You Attack again! Sly Cooper!" << std::endl;
			//return false;
		}
	}
}

/*void seedRng(int a) {
	srand(a);
}*/

int rng() {
	int rng = rand() % 100 + 1;
	return rng;
}





// based on order entered, different things happen even if the second term isnt used. you can always access all of the stets using dot notation
// just make it so that Attack() also takes the move they use, and then that move manipulates the monsteros stats
// the Move function takes two monsteros and determines the effects but you still need the attack function to takes a move. And the attack functions can take a move, because the move is a bool, so just make the attack function so it takes a bool
// each monstero needs to have x number of moves, as if they 
// all monsteros start with 6 moves, but you can increase the number of moves you can use
//monsteros need a data structure that can store moves (make those structure functions!!!!!!!!!)
// the player then selects the move
// create a function called battle that takes two players, and then all other functions are called with in it, this then passes down who is player one and player two
// create a function called battle that startes the fight. player 1 and a pre maid monstero are placed into the function, and it compares their speed stat, then use an if statement, and the higher speed stat player goes through the speed threshhold check (which sets a counter, this counter determines how many RNG shots they have, so if they have a really high speed stat and they get a counter of 3, they can then have the RNG run after the first move, and if passed they attack again, and then it runs a second time, and if the pass they attack again and so on and so forth), 
//then the player need to select a move, and that move is a function that manipulates
// if int 1 effects the caster, if int 2 effects the enemy (for each move function)
// each attack returns true or false, and the true moves affect the user and the false moves affect the enemy
// player needs a function when called that 
// the move takes in PLAYER, which returns a monstero (feed output into a function that creates a monstero, and then that is passed in
// jk at the start have the player cin their stats in and then use those values to make the monstero, and that monstero object has a 0 or 1, and if 0 when that item is read it determines if it is a player or bot, and if it is a player then the Move(which is a function) the players functions are accesed, and each Move function is probably going to have to take player and bot

// make move a switchboard that askes if bot or player, if player, the move select is given to the player (keyboard) if not (false) the move select is passed to rng vallues assigned to each premaid monstero (stretch goal)



bool Combat(Player &Hero, Player &Villain) {
	int userInput = 0;
	//std::cout << "we did not reach the whilel loop" << std::endl;
	while (true) {
		//std::cout << "We made it into the function" << std::endl;
		if (Hero.m.Spd > Villain.m.Spd) {
				std::cout << "1: Attack" << std::endl;
				std::cout << "2: Love" << std::endl;
				std::cout << "3: Confidence" << std::endl;
				std::cout << "4: Focus" << std::endl;
				cin >> userInput;
				if (userInput == 1) {
					Attack(Hero.m, Villain.m);
					
				}
				else if (userInput == 2) {
					Love(Hero.m);
					
				}
				else if (userInput == 3) {
					Confidence(Hero.m);
					
				}
				else if (userInput == 4) {
					Focus(Hero.m);
					
				}
				if (Villain.m.HP <= 0) {
					std::cout << "YOU ARE VICTORIOUS. Your class rank has increased and more people will try to fuck you up!" << std::endl;
					return false;
				}
				
				Attack(Villain.m, Hero.m);
			}
		//}
		else if (Villain.m.Spd > Hero.m.Spd) {
			
					Attack(Villain.m, Hero.m);
					if (Hero.m.HP <= 0) {
						std::cout << "You have been defeated, no one loves you and Juliet is dead" << std::endl;

						return false;
					}
					

				
			}

			
			//Attack(Hero.m, Villain.m);
			std::cout << "1: Attack" << std::endl;
			std::cout << "2: Love" << std::endl;
			std::cout << "3: Confidence" << std::endl;
			std::cout << "4: Focus" << std::endl;
			cin >> userInput;
			if (userInput == 1) {
				Attack(Hero.m, Villain.m);
			}
			else if (userInput == 2) {
				Love(Hero.m);
			}
			else if (userInput == 3) {
				Confidence(Hero.m);
			}
			else if (userInput == 4) {
				Focus(Hero.m);
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
