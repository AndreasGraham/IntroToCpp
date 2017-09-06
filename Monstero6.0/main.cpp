#include <iostream>
#include "MonsteroStructs.h"
using namespace std;

// char name, power, dfs, brutality, spds, heart, HP, type


EL PeaceBuff = {"Spread Peace", 0, 0, -0.05f , 0, 3, 20, 0};
EL PeaceNerf = { "Spread Peace", 0, 0, -0.10f, 0, 0, 0, 0 };
DTEL SpreadPeace = { "Spread Peace", PeaceBuff, PeaceNerf, "All Brutality was reduced!" , 0};
EL null = {"null", 0, 0, 0, 0, 0, 0, 0}; // dummy variables
EL null1 = { "null", 0, 0, 0, 0, 0, 0, 0 };

DTEL nullD = {"null", null, null1, "null", 0};

EL Anxiety = {"Anxiety", 0, -3, 0, 6, 0, 0, "Speed was greatly increased, but defense decreased", 1}; // type one applies to self
EL Depression = {"Crippling Depression", 0, 6, 0, -3, 0, 0, "Defense greatly increased, but speed decreased", 1};
EL Confidence = {"Confidence Booster", 2, 2, 0, 2, 0, 0, "Power, defense, and speed were all boosted!", 1};
EL BitchSlap = {"Bitch Slap", -1.5, 0, 0, 0, 0, 0, "You got bitchslapped!", 2}; //effects oponent

EL moveArray[] {null, BitchSlap, Depression, Confidence};
DTEL moveArrayD[] = {SpreadPeace, nullD, nullD, nullD};
bool moveSorD[4] = { false, true, true, true };


Moveset moveSetA = {
	{ null, BitchSlap, Depression, Confidence },
	{ SpreadPeace, nullD, nullD, nullD },
	{ false, true, true, true }
};



//Monstero Juliet; 
//Monstero Romeo;






int main() {

	//memcpy(Juliet.moves.moveArray, moveArray, sizeof(moveArray));

	std::cout << "Player 1 Enter your stats! Balance 5 stants among 50 points!"<< std::endl;
	std::cout << "Power: " << std::endl;
	float power = 0;
	cin >> power;
	std::cout << "Defense: " << std::endl;
	float defense = 0;
	cin >> defense;
	std::cout << "Brutality: " << std::endl;
	float brutality = 0;
	cin >> brutality;
	std::cout << "Speed: " << std::endl;
	float speed = 0;
	cin >> speed;
	std::cout << "Heart: " << std::endl;
	float heart = 0;
	cin >> heart;
	if (power + defense + brutality + speed + heart > 50) {
		std::cout << "you cheating fuck" << std::endl;
	} 
	Monstero Juliet = { power, defense, brutality, speed, heart, 200, moveSetA, false };
	

	std::cout << "Player 2 Enter your stats! Balance 5 stants among 50 points!" << std::endl;
	std::cout << "Power: " << std::endl;
	float power1 = 0;
	cin >> power1;
	std::cout << "Defense: " << std::endl;
	float defense1 = 0;
	cin >> defense1;
	std::cout << "Brutality: " << std::endl;
	float brutality1 = 0;
	cin >> brutality1;
	std::cout << "Speed: " << std::endl;
	float speed1 = 0;
	cin >> speed1;
	std::cout << "Heart: " << std::endl;
	float heart1 = 0;
	cin >> heart1;
	if (power1 + defense1 + brutality1 + speed1 + heart1 > 50) {
		std::cout << "you cheating fuck" << std::endl;
	}
	Monstero Romeo = { power1, defense1, brutality1, speed1, heart1, 200, moveSetA, false };

	//displayMoves(moveSetA);
	Player Joe = { Juliet };
	Player Schmoe = { Romeo };
	
	
	Combat(Joe, Schmoe);
	system("pause");
}