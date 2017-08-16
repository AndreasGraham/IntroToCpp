#include "mathutils.h"
#include <cmath>
int min(int a, int b) {
	if (a > b) {
		return b;
	}
	else if (b > a) {
		return a;
	}
	else if (a == b) {
		return 0;
	}
}

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else if (b > a) {
		return b;
	}
	else if (a == b) {
		return 0;
	}
}

int clamp(int lower, int upper, int value) {
	if (value < lower) {
		value = lower;
	}
	else if (value > upper) {
		value = upper;
	}

	return value;
}

int dist(int x1, int y1, int x2, int y2) {
	int distance = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 1 / 2);
	return distance;
}