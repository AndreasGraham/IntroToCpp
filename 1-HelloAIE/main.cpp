#include <iostream>

int main()
{
	//print practice

	std::cout << "Hello AIE!" << std::endl;


	std::cout << "FAVORITE TRACKS LIST" << std::endl;
	std::cout << "legend of zelda orchestrated" << std::endl;
	std::cout << "naruto soundtrack" << std::endl;

	//0-5
	for (int i = 0; i < 6; i++) {
		std::cout << i << std::endl;
	}

	system("pause");

	//0-5-0
	for (int i = 0; i < 6; i++) {
		std::cout << i << std::endl;
		if (i == 5) {
			for (int i = 5; i >-1; i--) {
				std::cout << i << std::endl;
			}
		}
	}

	system("pause");

	//FIND THE ERROR (has been fixed)
	std::cout << "SyntacticalErrors-A)" << std::endl;
	std::cout << "Howdy AIE" << std::endl;
	std::cout << "It's a fine day today as any!" << std::endl;
	std::cout << "I really wish I had some potatoes..." << std::endl;

	system("pause");

	//FIND THE ERROR (has been fixed)
	std::cout << "SyntacticalErrors-B)" << std::endl;
	std::cout << "Four score and seven years ago" << std::endl;
	std::cout << "our fathers brought forth on this continent," << std::endl;
	std::cout << "a new nation," << std::endl;
	std::cout << "conceived in Libery, and dedicated to the proposition" << std::endl;
	std::cout << "that all men are created equal." << std::endl;

	std::cout << "Now we are engaged in a great civil war," << std::endl;
	std::cout << "testing whether that nation, or any nation" << std::endl;
	std::cout << "so conceived and so dedicated, can long endure." << std::endl;

	system("pause");

}