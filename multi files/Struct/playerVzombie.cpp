#include "playerVzombie.h"
#include <iostream>

void battle(Zombie z, Human h) {
	while (z.HP > 0 && h.HP > 0) {
		z.HP = z.HP - (h.AP - z.DP);
		h.HP = h.HP - (z.AP - h.DP);
	}
	if (z.HP <= 0) {
		std::cout << "HUMANS SURVIVE!" << std::endl;
	}
	else if (h.HP <= 0) {
		std::cout << "Zombies inherit the Earth." << std::endl;
	}
}