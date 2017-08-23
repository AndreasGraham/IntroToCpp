#include "Vector2D.h"
#include <iostream>
#include <cmath>

Vector2D fineSum(Vector2D a, Vector2D b) {
	float xSum = a.x + b.x;
	float ySum = a.y + b.y;
	Vector2D c = { xSum, ySum };

	//std::cout << c << std::endl;
	return c;
}

Vector2D difference(Vector2D a, Vector2D b) {
	float xDif = a.x - b.x;
	float yDif = a.y - b.y;

	Vector2D c = { xDif, yDif };

	return c;
}

float distance(Vector2D a, Vector2D b) {
	float xDif = pow((a.x - b.x), 2);
	float yDif = pow((a.y - b.y), 2);
	float distance = xDif + yDif;

	return distance;
}