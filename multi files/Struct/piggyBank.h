#pragma once

struct piggyBank {
	int singleD;
	int twoD;
	int fiveD;
	int quarters;
	int dimes;
	int nickles;
	int pennies;
};

//returns total monetary vallue of all dollar bills
float calcPiggybankNotes(piggyBank piggy);

float calcPiggybankCoins(piggyBank piggy);

float calcPiggybankTotal(piggyBank piggy);
