#include <iostream>
#include <array>

int subtract(int * a, int * b) {
	return *a - *b;
}

void plusThree(int * c, int b) {
	for (int i = 0; i < b; i ++) {
		c[i] = (i * 1 ) + 3;
		std::cout << c[i] << std::endl;
	}
}

void printArray(int * a, int b) {
	for (int i = 0; i < b; i++) {
		std::cout << a[i] << std::endl;
	}
}

int main() {

	int * age = new int(100);
	float * catnip = new float(10);
	bool * dognip = new bool(10);
	int * age1 = new int[10];
	float * catnip1 = new float[10];
	bool * dognip1 = new bool[10];

	for (int i = 0; i < 100; i++) {
		age1[i]  = i;
	}

	int c[100];

	plusThree(c, 100);
	
	printArray(age1, 100);



	

	delete age;
	delete catnip;
	delete dognip;
	delete age1;
	delete catnip1;
	delete dognip1;

	system("pause");
}