#pragma once

//don't initiallize structs with values like float x = 0;
struct Vector2D {
	float x;
	float y;
};

Vector2D fineSum(Vector2D x, Vector2D y);
Vector2D difference(Vector2D x, Vector2D y);
float distance(Vector2D x, Vector2D y);