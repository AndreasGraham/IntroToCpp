#include <iostream>
using namespace std;


int main()
{
	////closed section

	//A
int number = 5;

number = 9;
number = 11;
number = 14;

std::cout << "A) " << number << std::endl;

	//B
number = 10;
number = 9;

int thing = 55;
thing = 22;

std::cout << "B) " << number << std::endl;

	//C
number = 3;
number = 7;
number = 1;

int something = 23;
something = 21;

number = something;

std::cout << "C) " << number << std::endl;

	//D
number = 1;
something = 3;
number = something;

std::cout << "D) " << something << std::endl;
	
	//E
int x = 13;
x = x / 2;
std::cout << "E) " << x << std::endl;



	//F
float t = 13;
t = t / 2;
std::cout << "F)" << x << std::endl;


// Celsius to Fahreneheit
float degCelsius = 78.0f;
float degFahreneheit = 0.0f;

degFahreneheit = degCelsius*1.8 + 32.0;

std::cout << "Celsius to Fahrenheit)" << std::endl;
std::cout << "Celsius:    " << degCelsius << std::endl;
std::cout << "Fahrenheit: " << degFahreneheit << std::endl;

// Area of a rectangle

float rectWidth = 0.0f;  // Modify this variable below.
float rectHeight = 0.0f; // Modify this variable below.
float rectArea = 0.0f;   // Modify this variable below.

std::cout << "Enter two numbers" << std::endl;

cin >> rectWidth;
cin >> rectHeight;

rectArea = rectWidth*rectHeight;

std::cout << "Area of a Rectangle)" << std::endl;
std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
std::cout << "Area: " << rectArea << std::endl;

// number swap



int o = 24;
int w = 13;
std::cout << o << std::endl;
std::cout << w << std::endl;



o = o + w; // o = 37
w = o - w; // w = 13
o = o - w; // o = 24

std::cout << o << std::endl;
std::cout << w << std::endl;

///// open sections

int a = 2; // this is an integer literal, it is literally written into the code
std::cout << a << std::endl;

a = 5;

std::cout << a << std::endl;

int g = 1;
int y = 2;
int z = g + y;

std::cout << g << " plus " << y << " equals " << z << std::endl;

int frac1 = 1 / 3;
int frac2 = 2 / 3;
int frac3 = frac1 + frac2;

std::cout << frac3 << std::endl;

float fOne = 2.34f;
float fTwo = 2.56f;
float fThree = fOne + fTwo;

std::cout << fThree<< std::endl;

float fFour = 1;
float fFive = 2;
float fSix = fFour + fFive;

std::cout << fSix << std::endl;

int j = 1;
std::cout << "Enter a single intiger" << std::endl;
cin >> j;
std::cout << "You Entered: " << j << std::endl;


system("pause");
}