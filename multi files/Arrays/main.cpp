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
//remember just trying to reverse, what ever order it is, has nothing to do with value
void Reverse(int num[], int size) {
	
	for (int i = 0; i < size / 2; i++) {
		
		//hold onto the number in the front
		int temp = num[i];

		//set the front to the back
		num[i] = num[size - 1 - i];
		//set the back to the front
		num[size - 1 - i] = temp;
		// 12345--> 52341 ---> 54321
	}

	for (int i = 0; i < size; i++) {
		std::cout << num[i] << std::endl;
	}
}

void descendingSort(int myArray[], int size) {
	
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			if (myArray[i] < myArray[i + 1]) {
				myArray[i] = myArray[i + 1] + myArray[i];
				myArray[i + 1] = myArray[i] - myArray[i + 1];
				myArray[i] = myArray[i] - myArray[i + 1];
			}
		}
	}
	for (int i = 0; i < size; i++) {
		std::cout << myArray[i] << std::endl;
	}
}

void ascendingSort(int myArray[], int size) {
	//for (int j = 0; j < size; j++) {
		for (int i = 0; i < size-1; i++) {
			if (myArray[i] > myArray[i + 1]) {
				myArray[i +1] = myArray[i + 1] + myArray[i];
				myArray[i] = myArray[i+1] - myArray[i];
				myArray[i+1] = myArray[i+1] - myArray[i];
			}
		
	}
	for (int i = 0; i < size; i++) {
		std::cout << myArray[i] << std::endl;
	}
}


int main() {
	//                 0
	// 2, 6, 3, 4, 3  1
	// 2, 3, 6, 4, 3  2
	// 2, 3, 4, 6, 3  3
	// 2, 3, 4, 3, 6, 4
	//

	int a[] = {6, 2, 3, 4, 3 };
	//printNumbers(a, 5);

	//sumNumbers(a, 6);
	//smallestValue(a, 5);
	//largestValue(a, 5);
	 //findIndex(a, 5, 2);
	 //arrayUniqueness(a, 5);
	//Reverse(a, 5);
	//descendingSort(a, 5);
	ascendingSort(a, 5);
	system("pause");
}