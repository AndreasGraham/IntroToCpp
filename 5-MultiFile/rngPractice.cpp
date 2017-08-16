#include <iostream>
#include "rngPractice.h"
//#include <stdlib.h>
#include <cstdlib>

void seedRng(int a) {
	srand(a);
}

int rng() {
	int rng = rand() % 100 + 1;

	std::cout << rng << std::endl;
	return rng;
}

int rngRange(int lower, int upper) {
	int rng = rand() % upper + lower;
	std::cout << rng << std::endl;
	return rng;
}

bool Rngb() {

	int a = rand() % 2;

	if (a == 1) {
		std::cout << "TRUEEEEEEEE" << std::endl;
		return true;
	}
	else {
		std::cout << "FALSEEEEEEE" << std::endl;
		return false;
	}
}

bool rngbChance(int chance) 
{
	// chance = 75
	// generated a number 0- 99 , dice roll
	// rando = 43
	// if (rando <= 75) {return true}
	// else {false}

	int rando = rand() % 100;

	if (rando <= chance) {
		std::cout << "TRUEEEEEEEE" << std::endl;
		return true;
	}
	else {
		std::cout << "FALSEEEEEEEEE" << std::endl;
		return false;
	}

}


