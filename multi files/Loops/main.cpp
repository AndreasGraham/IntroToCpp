#include<iostream>
using namespace std;

void printXY(int low, int high) {
	while (low <= high ) {
		std::cout << low << std::endl;
		low++;
	}
}

int promptLargest(int x) {
	int arr[40];
	int max = 0;
	for (int i = 0; i < x; i++) {
		std::cout << "Input a number" << std::endl;
		cin >> arr[i];
	}
	for (int i = 0; i < x; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	std::cout << "max is: " << max << std::endl;
	return max;

}

int prompSmallest(int x) {
	int arr[40];
	int min = 100000000;
	for (int i = 0; i < x; i++) {
		std::cout << "Input a number" << std::endl;
		cin >> arr[i];
	}
	for (int i = 0; i < x; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	std::cout << "min is: " << min << std::endl;
	return min;
}

int EvenOrOdd(int start, int end) {
	while (start < end) {
		if (start % 2 == 0) {
			std::cout << "even!" << std::endl;
		}
		else {
			std::cout << "odd!" << std::endl;
		}
		start++;
	}
	return start;
}

void fizzBuzz(int start, int end) {
	int range = end - start;
	
	for (int i = 0; i < range; i++) {
		if (start % 3 == 0 && start % 5 != 0) {
			std::cout << "Fizz" << std::endl;
		}
		else if (start % 5 == 0 && start % 3 != 0) {
			std::cout << "Buzz" << std::endl;
		}
		else if (start % 5 == 0 && start % 3 == 0) {
			std::cout << "FizzBuzz" << std::endl;
		}
		else {
			std::cout << start << std::endl;
		}

		start++;
	}
}

void gridGen(int width, int height) {
	for (int i = 0; i < height; i++) {
		std::cout << "" << std::endl;
		for (int j = 0; j < width; j++) {
			std::cout << "X";
		}
	}
}

bool guessTheNumber(int lower, int upper, int tryCount) {
	for (int i = 0; i < tryCount; i++) {
		int userGuess = 0;
		std::cout << "The rent is too damn high! So pick a number." << std::endl;
		cin >> userGuess;
		if (userGuess > upper) {
			std::cout << "You guessed too damn high!" << std::endl;
		}
		else if (userGuess < lower) {
			std::cout << "You guessed to damn low!" << std::endl;
		}
		else {
			std::cout << "You guessed just damn right!" << std::endl;
			return true;
		}
	}
	std::cout << "You are a scrub" << std::endl;
	return false;
}

int fibS(int start) {
	
	int x;
	if (start == 0)return 0;
	if (start == 1)return 1;
	x = fibS(start - 1) + fibS(start - 2);
	
	return x;
	
}

int main()
{
	/*for (int i = 0; i < 101; i++) {
		std::cout << i << std::endl;
	}

	system("pause");

	int j = 100;

	while (j > 0) {
		std::cout << j << std::endl;
		j--;
	}

	int year = 1995;

	do {
		std::cout << year << std::endl;
			year++;
	} while (year < 2018);

	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			std::cout << "What is your first favorite number?" << std::endl;
			cin >> firstNumber;
		}
		else if (i == 1) {
			std::cout << "What is your second favorite number?" << std::endl;
			cin >> secondNumber;
		}
		else if (i == 2) {
			std::cout << "What is your third favorite number?" << std::endl;
			cin >> thirdNumber;
		}
	}

	std::cout << "These are your favorite numbers" << firstNumber << ", " << secondNumber << ", " << thirdNumber << std::endl;
	*/
	//printXY(1, 10);

	//promptLargest(5);

	//prompSmallest(5);
	//EvenOrOdd(10, 20);
	//fizzBuzz(1, 31);
	//gridGen(5, 5);
	//guessTheNumber(5, 7, 3);
	fibS(10);



	system("pause");
}