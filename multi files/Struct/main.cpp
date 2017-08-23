#include "piggyBank.h"
#include "student.h"
#include "Vector2d.h"
#include "playerVzombie.h"
#include <iostream>
int main() {

	piggyBank myPiggy = { 1, 2, 3, 4, 5, 6, 7 };
	//calcPiggybankTotal(myPiggy);

	Student studentA = { 123, 37, 789 };
	Student studentB = { 124, 89, 789 };
	Student studentC = { 125, 200, 1000 };
	Student studentD = { 126, 95, 1000 };
	//Student studentF = { 127, 80, 1000 };
	Student studentArr[] = { studentA, studentB, studentC, studentD};
	//printStudent(studentA);
	studentAnalytics(studentArr, 4, 789);
	Vector2D a = { 1.0f, 2.0f };
	Vector2D b = { 3.0f, 4.0f };
	//fineSum(a, b);
	//difference(a, b);
	//distance(a, b);
	Zombie z = { 100, 150, 30 };
	Human h = { 150, 80, 80 };
	//battle(z, h);
	system("pause");
}