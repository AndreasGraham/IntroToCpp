#include <iostream>
using namespace std;


int main()
{
	/*int happiness = -5;

	bool isHappy = false;

	if (isHappy) {
		std::cout << "i am very happy!" << std::endl;
	}
	else {
		std::cout << "I am very sad!" << std::endl;
	}

	if (happiness > 75) {
		std::cout << "you are very happy!" << std::endl;
	}

	else if (happiness > 30) {
		std::cout << "you are rahter content" << std::endl;
	}

	else if (happiness > 0) {
		std::cout << "have hope friend!" << std::endl;
	}

	else
	{
		std::cout << "use your potion of happiness" << std::endl;
	}

	//number judging

	int numberJudge = 0;

	cin >> numberJudge;

	if (numberJudge > 50) {
		std::cout << numberJudge << " is a large number!" << std::endl;
	}
	else if (numberJudge < 50) {
		std::cout << numberJudge << " is a small number!" << std::endl;
	}
	else if (numberJudge == 50) {
		std::cout << numberJudge << " is exactly 50!" << std::endl;
	}

	

	//open

	//even or odd

	int myNumber = 0;
	cin >> myNumber;

	int divideTwo = myNumber % 2;
	if (divideTwo > 0) {
		std::cout << "Your number is odd!" << std::endl;
	}
	else if (divideTwo == 0) {
		std::cout << "Your number is even!" << std::endl;
	}

	//number clamp
	int healthPoints = 0;
	cin >> healthPoints;

	if (healthPoints < 20) {
		healthPoints = 20;
		std::cout << "Get good scrub!" << std::endl;
	}

	if (healthPoints > 100) {
		healthPoints = 100;
		std::cout << "You are at full health! good job!" << std::endl;
	}

	int cookieOrder = 0;
	std::cout << "Howe many cookies would you like?" << std::endl;
	cin >> cookieOrder;

	int orderCheck = cookieOrder % 23;

	if (orderCheck > 0) {
		cookieOrder = cookieOrder - orderCheck;
		std::cout << "You ordered " << cookieOrder << " Cookies!" << std::endl;
	}
	else if (cookieOrder < 23) {
		std::cout << "Order in batches of 23 you noob!" << std::endl;
	}
	else if (orderCheck == 0) {
		std::cout << "Your order of: " << cookieOrder << " cookies is ready!" << std::endl;
	}

	int textBooks = 0;

	cin >> textBooks;

	if (textBooks < 9) {
		std::cout << "You must order at least 9 textbooks!" << std::endl;
	}
	else if (textBooks > 30) {
		std::cout << "You can not order more than 30 textbooks!" << std::endl;
	}
	else {
		std::cout << "Your order of" << textBooks << " has shipped!" << std::endl;
	}

	
	char motionBlur = 'h';
	cin >> motionBlur;
	if (motionBlur != 'y' && motionBlur != 'n') {
		std::cout << "NO MOTION BLUR FOR YOU" << std::endl;
	}
	else {
		std::cout << "MOTION BLUR WOOOOOOOOO" << std::endl;
	}
	

	int textureSize = 0;
	cin >> textureSize;
	int textureMod = textureSize % 2;
	if (textureMod > 0) {
		textureSize += 1;
	}
	else if (textureMod == 0)
	{
		textureSize += 2;
	}

	std::cout << textureSize << std::endl;
	*/
	//four function disposable calculator

	/*std::cout << "Enter two numbers and THEN an operator" << std::endl;
	int number1 = 0;
	int number2 = 0;
	char Opperator = 'h';
	int product = 0;

	cin >> number1;
	cin >> Opperator;
	cin >> number2;
	

	if (Opperator == '+') {
		product = number1 + number2;
	}
	else if (Opperator == '-') {
		product = number1 - number2;
	}
	else if (Opperator == '*') {
		product = number1*number2;
	}
	else if (Opperator == '/') {
		product = number1 / number2;
	}

	std::cout << product << std::endl;

	//std::cout << a << std::endl;*/

// DINO BATTLE
	
	int strength = 0;
	int dinoStrength = 4;
	int humanScore = 0;
	int dinoScore = 0;
	
	// question 1
	std::cout << "How would you rate your strength on a scale of 1 to 10" << std::endl;
	cin >> strength;

	if (strength > dinoStrength) {
		humanScore += 1;
	}
	else if (dinoStrength > strength) {
		dinoScore += 1;
	}

	// question 2
	std::cout << "Which of the following would you take into battle, A sack of potatoes (1), an invisibility cape (2), or The Mango Blade (3)" << std::endl;
	int weapon = 0;
	cin >> weapon;

	if (weapon == 1) {
		std::cout << "DINO WINS RPS" << std::endl;
		dinoScore += 1;
	}
	else if (weapon == 3) {
		std::cout << "HUMAN WINS RPS" << std::endl;
		humanScore += 1;
	}
	
	// question 3
	std::cout << "How many battles have you fought?" << std::endl;
	int battlesFought = 0;
	int dinoBattles = 2;
	cin >> battlesFought;

	if (battlesFought > dinoBattles) {
		humanScore += 1;
	}
	else if (dinoBattles > battlesFought) {
		dinoScore += 1;
	}

	// question 4
	int vitaminC = 0;
	std::cout << "How much Vitamin C do you get everyday? (mg)" << std::endl;
	cin >> vitaminC;

	if (vitaminC >= 75) {
		humanScore += 1;
	}
	if (vitaminC >= 75 && weapon == 3) {
		humanScore += 1;
	}

	if (humanScore > dinoScore) {
		std::cout << "HUMAN WINS" << std::endl;
	}
	else if (dinoScore > humanScore) {
		std::cout << "DINO WINS" << std::endl;
	}

	system("pause");
}