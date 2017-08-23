#include "Person.h"

#include <iostream>

//define that function

void describePerson(Person person) {
	std::cout << "Age: " << person.age <<std::endl;
	std::cout << "Wgt: " << person.weight << std::endl;
	std::cout << "Cha: " << person.charisma << std::endl;
	std::cout << "Str: " << person.strength << std::endl;
	std::cout << " Dex: " << person.dexterity;
}

//&person allows you to change the value of the original object passed in
void levelUP(Person &person) {
	person.age = person.age + 1;
}
