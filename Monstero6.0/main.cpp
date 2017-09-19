#include <iostream>
#include "MonsteroStructs.h"
#include <fstream>
#include <string>
using namespace std;

//Waiqu Ko: "Twisted Child"

// char name, power, dfs, brutality, spds, heart, HP, type
EL PeaceBuff = {"Spread Peace", 0, 0, -0.05f , 0, 3, 20, 0};
EL PeaceNerf = { "Spread Peace", 0, 0, -0.10f, 0, 0, 0, 0 };
DTEL SpreadPeace = { "Spread Peace", PeaceBuff, PeaceNerf, "All Brutality was reduced!" , 0};
EL null = {"null", 0, 0, 0, 0, 0, 0, 0}; // dummy variables
EL null1 = { "null", 0, 0, 0, 0, 0, 0, 0 };

DTEL nullD = {"null", null, null1, "null", 0};


EL Anxiety = {"Anxiety", 0, -3, 0, 6, 0, 0, "You might have a panic attack!", 1}; // type one applies to self
EL Depression = {"Crippling Depression", 0, 6, 0, -3, 0, 0, "What is even the point?", 1};
EL Confidence = {"Confidence Booster", 2, 2, 0, 2, 0, 0, "You believe therefore you do!", 1};
EL BitchSlap = {"Bitch Slap", -1.15, 0, 0, 0, 0, 0, "You got bitchslapped! You must be a bitch!", 2}; //effects oponent
//EL IntricateSoul
//EL Fear = {"Eyes of Death", 0, }
EL Hatred = { "The Depths of Hate", 10, -5, 1.35, 2, -5, -40, "Your heart is full of hate!", 1};
EL Obesity = { "Eat your Feelings!", 6, 3, 0, -3, -5, 0, "Ice Cream and Chicken wings for dinner!", 1};
EL KarateKlass = { "Blue Belt", -1.10, 1, 0, 1, 1, 0, "Mediocre low kick!", 2 };
EL sacraficialLamb = {"True Sight", 0, 0, 0, 0, 10, -5, "You see into your enemies heart.", 1};


//File-IO
// string name = FILE IO THINGY
// 




//KrustyKrab
//EL


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

	
	float power = 0;
	float defense = 0;
	float brutality = 0;
	float speed = 0;
	float heart = 0;
	
	float power1 = 0;
	float defense1 = 0;
	float brutality1 = 0;
	float speed1 = 0;
	float heart1 = 0;
	int heroSelect = 0;

	FillMoveFromFile(BitchSlap);
	cout << BitchSlap.Brutality << endl;
	cout << BitchSlap.Spd << endl;
	cout << BitchSlap.Heart << endl;
	cout << BitchSlap.HP << endl;
	cout << BitchSlap.Dfs << endl;
	cout << BitchSlap.Power << endl;
	




	cout << "Would you like to create a character, or load a character? (1 or 0)" << endl;
	cin >> heroSelect;
	if (heroSelect == 1) {
		creation1(power, defense, brutality, speed, heart);
		creation2(power, defense, brutality, speed, heart);
	}

	Monstero Juliet = { power, defense, brutality, speed, heart, 200, moveSetA, false };
	Monstero Romeo = { power1, defense1, brutality1, speed1, heart1, 200, moveSetA, false };

	//displayMoves(moveSetA);
	Player Joe = { Juliet };
	Player Schmoe = { Romeo };
	
	
 	Combat(Joe, Schmoe);
	system("pause");
}