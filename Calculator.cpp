#include <iostream>
#include <string>

#define print(x) std::cout << x << std::endl;

void displayTitle()
{
	print("Some Calculator Program made in C++");
	print("Made by Qazaroth");
	print("Github: https://github.com/Qazaroth/CalculatorCPP");
}

int main()
{
	int firstNo, secondNo;

	displayTitle();

	print("What's the first number?");
	std::cin >> firstNo;

	print("What's the second number?");
	std::cin >> secondNo;

	int output = firstNo + secondNo;

	print("The sum of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));

	return 0;
}