#pragma once
#include <iostream>
struct Monstero {
	int Power;
	int Dfs;
	int Brutality;
	int Spd;
	int Heart;
	int HP;
	int Love; // heart buff
	int Kindness; // defense buff
	int Soul; // HP buff
	int Peace; // SPD buff
	int Focus; // increases offense
	int Patience; // doubles the players stats if the game lasts more than 20 turns
	int Confidence; // speed buff
	//int Hate; // Brutality buff
	int Jealousy // buffs brutality
	int turnCounter; //tracks turns so numberOfturn based stun and stat moves can be tracked
	bool taunt;
	bool peaceOfMind;
	bool infection;
	bool imuneSystem;
	bool Lice(); // steels items
	// could put an if statement with in the move itslef that runs on a bool, if rng is over X return true (causes attack to work) if false no attack. means the attack (function) will have to accept a bool unlike th other attacks. 

};


struct Player {
	Monstero m;
};

void Attack(Monstero &A, Monstero &B);
bool Combat(Player &Hero, Player &Villain);
int Love(); // heart buff
int Kindness(); // defense buff
int Soul(); // HP buff
int Peace(); // SPD buff
int Focus(); // increases offense
int Patience(); // increases spd
int Confidence(); // speed buff
				//int Hate; // Brutality buff
int Jealousy(); // buffs brutality
int Anxiety(); // buffs brutality but decreases heart
int Depression(); // buffs defense but decreases spd
int Fear(); // buffs defense but decreases power
int Hate(); // greatly increases strength and defense, but decreases HP
int CalmMeditation();// doubles the players stats if the game lasts more than 20 turns
int EgoBoost();// gives the user a Power boost continuously, however if power gets to a certain level, the monstero begins to lose
int Obesity(); // decreases the players speed and heart but increases their power 

// each move takes a bool and it can be a type 1 or type 2 bool, type one bool effects the caster, type two bool effects the enemy
// could use a number for different types of moves and then feed the names in that way. for example, if caster uses a move on the enemy (code number 1), then the 

bool Taunt(); // forces the enemy to become enranged and attack
bool PeaceOfMind(); // prevents the user from becoming enranged
bool Infection(); // the player slowly loses health over time
bool ImuneSystem(); // prevents the player from getting infected
bool Lice(); // steels items
bool BackStab(); // player looses dramatic amount of health over 3 turns
bool Lie(); //Enemy's Monstero's defense drops
bool Pain(); // if the players heart stat is higher, then the heart stat is boosted. If the players brutality is higher, than the brutality stat is raised
// maybe add a thing where if their speed is a certain level, they attack twice, or even thrice. ORRRRRRR an RNG is produced and multiplied by the speed, which determines if they attack again.
// could use a bool to run it, if over thirty attack twice, if over 40 attack thrice etc
//or you could run the loop as many times continually raising the threshold
bool Arousal(); // buffs the strengths of Risk(RNG moves) but decreases their accuracy
  // ability that doubles a stat if it reaches a certain height. 
//could use an RNG for each move to create an AI that was more likely to use certain moves, thus creating the ilusion of a strategy.
// everyone starts with 50 points, make your monstero, early fight you boost your stats and lay some late game traps(add some late game traps, but they could also be the stats)
//try balancing using a scale, maybe convert brutality to a number like heart and add ten points
//