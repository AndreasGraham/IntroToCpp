#pragma once

struct Person {
	int age;
	float weight;

	int charisma;
	int strength;
	int dexterity;

	float cash;
};

//declared function
void levelUP(Person &person);

void describePerson(Person person);

