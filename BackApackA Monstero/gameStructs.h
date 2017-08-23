#pragma once
#include <iostream>
struct Monstero {
	int Power;
	int Dfs;
	int Brutality;
	int Spd;
	int Heart;
	int HP;
};


struct Player {
	Monstero m;
};

void Attack(Monstero &A, Monstero &B);
bool Combat(Player &Hero, Player &Villain);