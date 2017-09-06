#include "MonsteroStructs.h"
#include <iostream>
using namespace std;

//EffectLayer sacraficialLove = {}

void Clear()
{
	system("cls");
}

void displayString(EL e) {
	std::cout << e.s << std::endl;
}

void displayDTELstring(DTEL d) {
	std::cout << d.s << std::endl;
}

void stApply(EL e, Monstero &m) {
	m.Power += e.Power;
	m.Dfs += e.Dfs;
	m.Brutality += e.Brutality;
	m.Spd += e.Spd;
	m.Heart += e.Heart;
	m.HP += e.HP;
	displayString(e);
}

void applyAttack(EL e, Monstero &m, Monstero &g) {
	if (m.HP <= 100) {
		m.HP = m.HP - ((m.Dfs + m.Heart) - g.Power*e.Power*g.Brutality);
	}
	else {
		m.HP = m.HP - ((m.Dfs) - g.Power*e.Power);
	}

	displayString(e);
}
//hi
void dtApply(DTEL e, Monstero &m, Monstero &v) {
	m.Power += e.bt.Power;
	m.Dfs += e.bt.Dfs;
	m.Brutality += e.bt.Brutality;
	m.Spd += e.bt.Spd;
	m.Heart += e.bt.Heart;
	m.HP += e.bt.HP;

	v.Power += e.nt.Power;
	v.Dfs += e.nt.Dfs;
	v.Brutality += e.nt.Brutality;
	v.Spd += e.nt.Spd;
	v.Heart += e.nt.Heart;
	v.HP += e.nt.HP;

	displayDTELstring(e);
}

void displayMoves(Moveset moveSet) {
	
	//std::cout << "1) " << moveSet.moveArray[1].moveName << std::endl;
	//std::cout << "2) " << moveSet.moveArray[2].moveName << std::endl;
	//std::cout << "3) " << moveSet.moveArray[3].moveName << std::endl;
	//std::cout << "4) " << moveSet.moveArrayD[0].moveName << std::endl;
	///*for (int i = 0; i < 4; i++) {
		/*if (b[i] == true) {
			std::cout << i << ") " << moveSet[0].moveArray[1].moveName << std::endl;
		}
		else {
			std::cout << i << ") " << dMoves[i].moveName << std::endl;
		}
	}*/

	for (int i = 0; i < 4; i++) {
		if (moveSet.moveSorD[i] == true) {
			std::cout << i << ") " << moveSet.moveArray[i].moveName << std::endl;
		}
		else {
			std::cout << i << ") " << moveSet.moveArrayD[i].moveName << std::endl;
		}
	}


}


bool Combat(Player Hero, Player Villain) {
	Monstero playerMons = Hero.m, villainMons = Villain.m;

	while (true) {
		if (Hero.m.Spd >= Villain.m.Spd) {
			// check the players moves
			
			displayMoves(Hero.m.moves);
			//displayMoves(Hero.m.moveArray, Hero.m.moveArrayD, Hero.m.moveSorD);
			int playerInput = 0;
			
			std::cout << "Turn: Player 1" << std::endl;
			cin >> playerInput;
			
			if (Hero.m.moves.moveSorD[playerInput] == true && Hero.m.moves.moveArray[playerInput].type == 1) {
				
				stApply(Hero.m.moves.moveArray[playerInput], Hero.m);
			}
			else if (Hero.m.moves.moveSorD[playerInput] == true && Hero.m.moves.moveArray[playerInput].type == 2) {
				applyAttack(Hero.m.moves.moveArray[playerInput], Villain.m, Hero.m); // damage reciever applied first
			}
			else {
				dtApply(Hero.m.moves.moveArrayD[playerInput], Hero.m, Villain.m);
			}
			
			// death check
			if (Villain.m.HP <= 0) {
				std::cout << "P1 is Victorious!!!!" << std::endl;
				return false;
			}
			
			std::cout << "Turn: Player 2" << std::endl;

			playerInput = 0;
			displayMoves(Villain.m.moves);
			cin >> playerInput;

			if (Villain.m.moves.moveSorD[playerInput] == true && Villain.m.moves.moveArray[playerInput].type == 1) {
				stApply(Villain.m.moves.moveArray[playerInput], Villain.m);
			}
			else if (Villain.m.moves.moveSorD[playerInput] == true && Villain.m.moves.moveArray[playerInput].type == 2) {
				applyAttack(Villain.m.moves.moveArray[playerInput], Hero.m, Villain.m);
			}
			else {
				dtApply(Villain.m.moves.moveArrayD[playerInput], Villain.m, Hero.m);
			}

			if (Hero.m.HP <= 0) {
				std::cout << "P2 is Victorious!!!!" << std::endl;
				return false;
			}
			
			std::cout << std::endl;
			std::cout << "P1 HP = " << Hero.m.HP << std::endl;

			std::cout << "P2 HP = " << Villain.m.HP << std::endl;
			std::cout << std::endl;
		
		}
		else {// if p2 is faster
			
			std::cout << "Turn: Player 2" << std::endl;

			int playerInput = 0;
			displayMoves(Villain.m.moves);
			cin >> playerInput;

			if (Villain.m.moves.moveSorD[playerInput] == true && Villain.m.moves.moveArray[playerInput].type == 1) {
				//std::cout << "We made it type1" << std::endl;
				stApply(Villain.m.moves.moveArray[playerInput], Villain.m);
			}
			else if (Villain.m.moves.moveSorD[playerInput] == true && Villain.m.moves.moveArray[playerInput].type == 2) {
				//std::cout << "We made type2" << std::endl;
				applyAttack(Villain.m.moves.moveArray[playerInput], Hero.m, Villain.m); // applyAttack(attackers move, defender, attacker)
			}
			else {
				//std::cout << "We made it typ3" << std::endl;
				dtApply(Villain.m.moves.moveArrayD[playerInput], Villain.m, Hero.m);
			}

			if (Hero.m.HP <= 0) {
				std::cout << "P2 is Victorious!!!!" << std::endl;
				return false;
			}
			
			std::cout << "Turn: Player 1" << std::endl;
			displayMoves(Hero.m.moves);
			 playerInput = 0;
			
			cin >> playerInput;

			if (Hero.m.moves.moveSorD[playerInput] == true && Hero.m.moves.moveArray[playerInput].type == 1) {
				stApply(Hero.m.moves.moveArray[playerInput], Hero.m);
			}
			else if (Hero.m.moves.moveSorD[playerInput] == true && Hero.m.moves.moveArray[playerInput].type == 2) {
				applyAttack(Hero.m.moves.moveArray[playerInput], Villain.m, Hero.m);
			}
			else {
				dtApply(Hero.m.moves.moveArrayD[playerInput], Hero.m, Villain.m);
			}

			// death check
			if (Villain.m.HP <= 0) {
				std::cout << "P1 is Victorious!!!!" << std::endl;
				return false;
			}

		}
		
		std::cout << std::endl;
		std::cout << "P1 HP = " << Hero.m.HP << std::endl;

		std::cout << "P2 HP = " << Villain.m.HP << std::endl;
		std::cout << std::endl;
		
	}
}