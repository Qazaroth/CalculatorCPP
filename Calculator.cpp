#include <iostream>
#include <string>

#define print(x) std::cout << x << std::endl;
#define separator "---------------------------"

void displayTitle()
{
	print("Some Calculator Program made in C++");
	print("Made by Qazaroth");
	print("Github: https://github.com/Qazaroth/CalculatorCPP");
	print(separator);
}

int main()
{
	int firstNo, secondNo, output;
	int choice;

	displayTitle();

	print("What do you like to do? [Input numbers]");
	print("1 - Addition");
	print("2 - Subtraction");
	print(separator);
	std::cin >> choice;

	if (std::cin.good())
	{
		switch (choice)
		{
		case 1: //Addition
			print("What's the first number?");
			std::cin >> firstNo;

			print("What's the second number?");
			std::cin >> secondNo;

			output = firstNo + secondNo;
			print("The sum of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));
			break;
		case 2: //Subtraction
			print("What's the first number?");
			std::cin >> firstNo;

			print("What's the second number?");
			std::cin >> secondNo;

			output = firstNo - secondNo;
			print("The subtraction of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));
			break;
		default:
			print("Invalid choice, try again...");
			break;
		}

		
	}

	
	return 0;
}