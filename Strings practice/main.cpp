#include "Strings.h"
#include <iostream>
#include <string>
using namespace std;

void greeting() {
	char name[20];
	
	std::cout << "Welome, input your name biotch" << std::endl;
	cin >> name;
	std::cout << "Whats good: " << name << std::endl;


}

void color(char a[]) {
	char red[] = "blue";

	if (strcmp(a, "blue") == 0) {
		std::cout << "BLUEEEEEE" << std::endl;
	}
}

void whiteSpace(char a[]) {
	std::cout << strlen(a) << std::endl;

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] != ' ') {
			std::cout << a[i];
		}
	}
}

void palindromeTest(char a[]) {

	string input = a;

	if (input == string(input.rbegin(), input.rend())) {
		cout << "palindrome success!" << endl;
	}
}

void pigLatin(char a[]) {
	
	char word[20] = "";

	word[0] = a[0];
	word[1] = a[1];

	a[strlen(a) - 1] = word[0];
	a[strlen(a) - 2 ] = word[1];

	std::cout << a << std::endl;


}

void titleGenerator(char a[], char b[]) {
	std::cout << a << " " << b << " is a little bitch!" << endl;
}

int main() {

	

	//greeting();
	//color("blue");
	//whiteSpace("ANDREAS GRAHAM");
	//palindromeTest("boob");
	pigLatin("bilbo");
	//titleGenerator("Bilbo", "Baggins");

	system("pause");
}