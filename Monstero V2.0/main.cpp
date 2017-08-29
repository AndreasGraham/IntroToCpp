#include <iostream>
#include "gameStructs.h"

//int MyArray[] = {1, 2, 3, 4};
Monstero Juliet = { 23, 6, 2, 5, 14, 100, 0, false };
Monstero Romeo = { 10, 16, 4, 15, 5, 100, 0, false };
Player Joe = { Juliet };
Player Schmoe = { Romeo };


int main() {
	std::cout << "I AM YOUR RIVAL, I CHALLANGE YOU TO A DUEL!!!" << std::endl;

	Combat(Joe, Schmoe);
	system("pause");
}