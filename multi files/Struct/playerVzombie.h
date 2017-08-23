#pragma once
struct Zombie {
	float HP;
	float AP;
	float DP;
};

struct Human {
	float HP;
	float AP;
	float DP;
};

void battle(Zombie a, Human b);