#include <iostream>
#include "dtgreet.h"

void dayGreeting(int day, int month, int year) {
	std::cout << "Good morrow space traveller! Today is: " << day << "/" << month << "/" << year << std::endl;
}

void timeGreeting(int hour, int minute) {
	std::cout << "The time is: " << hour << ":" << minute << std::endl;
}

bool isLeapYear(int year) {
	if (year % 4 == 0) {
		std::cout << "IT IS A LEAP YEAR WOOOOO" << std::endl;
		return true;
	}
	std::cout << "IT IS NOT A LEAP YEAR NOOOOOOOO" << std::endl;
	return false;
}

