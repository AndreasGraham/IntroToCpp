#include <iostream>
using namespace std;

void printNumbers(int numbers[], int size)
{
	for (int i =0; i < size; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}

int sumNumbers(int numbers[], int size) {
	int x = 0;
	for (int i = 0; i < size; i++) {
		std::cout << x << std::endl;
		x = x + numbers[i];
	}
	return x;
}

int smallestValue(int numbers[], int size) {
	
	int min = numbers[0];
	for (int i = 0; i < size; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	std::cout << min << std::endl;
	return min;
}

int largestValue(int numbers[], int size) {
	int max = numbers[0];
	for (int i = 0; i < size; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	std::cout << max << std::endl;
	return max;
}


int findIndex(int numbers[], int size, int value) {
	for (int i = 0; i < size; i++) {
		if (numbers[i] == value) {
			std::cout << i << std::endl;
			return i;
		}
	}
	return -1;
}

bool arrayUniqueness(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if (numbers[i] == numbers[j]) {
				std::cout << "NOT UNIQUE" << std::endl;
				return true;
			}
		}
	}

	std::cout << "UNIQUE" << std::endl;
	return false;

}

void Reverse(int numbers[], int size) {
	int x = 0;
	for (int i = 0; i < size-1; i++) {	
		for (int j = 0; j < size-i-1; j++) {
			if (numbers[j+1] == numbers[j]) {
				
				x = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = x;
			}
		}
		
	}
	for (int i = 0; i < size + 1; i++) {
		std::cout << numbers[i] << std::endl;
	}
}


int main() {

	int a[] = {6, 2, 3, 4, 3 };
	//printNumbers(a, 5);

	//sumNumbers(a, 6);
	//smallestValue(a, 5);
	//largestValue(a, 5);
	 //findIndex(a, 5, 2);
	 //arrayUniqueness(a, 5);
	Reverse(a, 5);
	system("pause");
}