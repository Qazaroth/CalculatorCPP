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
	int firstNo, lastNo;

	displayTitle();

	std::cin >> firstNo;

	return 0;
}