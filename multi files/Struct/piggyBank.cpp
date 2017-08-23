#include "piggyBank.h"
#include <iostream>

float calcPiggybankNotes(piggyBank piggy) {
	
	
	float total = piggy.singleD + piggy.twoD*2 + piggy.fiveD*5;
	return total;
}

float calcPiggybankCoins(piggyBank piggy) {
	float total = piggy.pennies*0.01 + piggy.nickles*0.05 + piggy.dimes*0.10 + piggy.quarters*0.25;
	return total;
}

float calcPiggybankTotal(piggyBank piggy) {
	float total = calcPiggybankCoins(piggy) + calcPiggybankNotes(piggy);
	std::cout << "Your account: " << total << std::endl;
	return total;
}

