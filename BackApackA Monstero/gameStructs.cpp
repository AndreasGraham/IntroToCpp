#include "gameStructs.h"
#include <iostream>

/*void Attack(Monstero &A, Monstero &B) {
	if (B.HP < 50) {
		B.Dfs = B.Dfs + B.Heart;
		A.Power = A.Power*A.Brutality;
	}
	
	B.HP = B.HP - (A.Power - B.Dfs);
}*/


void Attack(bool a) {

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