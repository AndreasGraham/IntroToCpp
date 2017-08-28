#pragma once
#include <iostream>
struct Monstero {
	float Power;
	float Dfs;
	float Brutality;
	float Spd;
	float Heart;
	float HP;
	int turns;
	//int MoveArray[4];
	/*int turnCounter; //tracks turns so numberOfturn based stun and stat moves can be tracked
	bool taunt;
	bool peaceOfMind;
	bool infection;
	bool imuneSystem;
	bool Lice(); // steels items*/ // add these later
	// could put an if statement with in the move itslef that runs on a bool, if rng is over X return true (causes attack to work) if false no attack. means the attack (function) will have to accept a bool unlike th other attacks. 

};


struct Player {
	Monstero m;
};
/*
Monstero MoveSet(, int move2, int move3, int move4, int moveSelect) {
	if(moveSelect == )
}*/

// could do each monstero has an array filled with four codes, passed in by cin
// 

void turnCheck1(int a, Monstero &A, Monstero &B);
void turnCheck2(int a, Monstero &A, Monstero &B);
void villainTurnCheck1(Monstero &A, Monstero &B);
void villainTurnCheck2(int a, Monstero &A, Monstero &B);
void seedRng(int a);
int rng();


void Attack(Monstero &A, Monstero &B);
bool Combat(Player &Hero, Player &Villain);
void Love(Monstero &A); // heart buff
void Kindness(Monstero &A); // defense buff
void Soul(Monstero &A); // HP buff
void Peace(Monstero &A, Monstero &B); // SPD buff // possible reduction in enemy brutality (if brutality is less than 
void Focus(Monstero &A); // increases offense
void Patience(Monstero &A); // increases spd
void Confidence(Monstero &A); // speed buff
				//int Hate; // Brutality buff
void Jealousy(Monstero &A); // Acquires one of their abilities and buffs brutality, reduces heart
void Anxiety(Monstero &A); // buffs brutality but decreases heart OR buffs speed and decreases defense
void Depression(Monstero &A); // buffs defense but decreases spd
void Fear(Monstero &A); // buffs defense but decreases power
void Hate(Monstero &A); // greatly increases strength and defense, but decreases HP
void CalmMeditation(Monstero &A);// doubles the players stats if the game lasts more than 20 turns
void EgoBoost(Monstero &A);// gives the user a Power boost continuously, however if power gets to a certain level, the monstero begins to lose
void Obesity(Monstero &A); // decreases the players speed and heart but increases their power 
void InsultClothes(Monstero &A, Monstero &B); // decreases enemy defense, decreases your heart
void TurnOtherCheek(Monstero &A); // if used and then enemy attacks caster gets massive heart bonus, and enemy loses most brutality

// passive ability?
void Poverty(Monstero &A);
void Wealth(Monstero &A);
void MiddleClass(Monstero &A);
void MotherlyLove(Monstero &A);
void PaternalEye(Monstero &A);
void OlderBrother(Monstero &A); // lets you see what move they will use (older brother stand behind them and sees their move?)
void Autism(Monstero &A); // doubles one stat of your choice, but cuts another stat of your choice in half

// each move takes a bool and it can be a type 1 or type 2 bool, type one bool effects the caster, type two bool effects the enemy
// could use a number for different types of moves and then feed the names in that way. for example, if caster uses a move on the enemy (code number 1), then the 

bool Taunt(Monstero &A); // forces the enemy to become enranged and attack
bool PeaceOfMind(Monstero &A); // prevents the user from becoming enranged
bool Infection(Monstero &A); // the player slowly loses health over time
bool ImuneSystem(Monstero &A); // prevents the player from getting infected
bool Lice(Monstero &A); // steels items
bool BackStab(Monstero &A); // player looses dramatic amount of health over 3 turns
bool Lie(Monstero &A); //Enemy's Monstero's defense drops
bool Pain(Monstero &A); // if the players heart stat is higher, then the heart stat is boosted. If the players brutality is higher, than the brutality stat is raised
// maybe add a thing where if their speed is a certain level, they attack twice, or even thrice. ORRRRRRR an RNG is produced and multiplied by the speed, which determines if they attack again.
// could use a bool to run it, if over thirty attack twice, if over 40 attack thrice etc
//or you could run the loop as many times continually raising the threshold
bool Arousal(Monstero &A); // buffs the strengths of Risk(RNG moves) but decreases their accuracy
  // ability that doubles a stat if it reaches a certain height. 
//could use an RNG for each move to create an AI that was more likely to use certain moves, thus creating the ilusion of a strategy.
// everyone starts with 50 points, make your monstero, early fight you boost your stats and lay some late game traps(add some late game traps, but they could also be the stats)
//try balancing using a scale, maybe convert brutality to a number like heart and add ten points
//