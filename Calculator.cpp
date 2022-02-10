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
	print("What do you like to do? [Input numbers]");
	print("0 - Exit");
	print("1 - Addition");
	print("2 - Subtraction");
	print("3 - Multiplication");
	print("4 - Division");
	print(separator);
}

void addition()
{
	int firstNo, secondNo, output;

	print("What's the first number?");
	std::cin >> firstNo;

	print("What's the second number?");
	std::cin >> secondNo;

	output = firstNo + secondNo;
	print("The sum of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));
}

void subtraction()
{
	int firstNo, secondNo, output;

	print("What's the first number?");
	std::cin >> firstNo;

	print("What's the second number?");
	std::cin >> secondNo;

	output = firstNo - secondNo;
	print("The subtraction of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));
}

void multiplication()
{
	float firstNo, secondNo, output;

	print("What's the first number?");
	std::cin >> firstNo;

	print("What's the second number?");
	std::cin >> secondNo;

	output = firstNo * secondNo;
	print("The multiplication of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));
}

void division()
{
	float firstNo, secondNo, output;

	print("What's the first number?");
	std::cin >> firstNo;

	print("What's the second number?");
	std::cin >> secondNo;

	output = firstNo / secondNo;
	print("The division of (" + std::to_string(firstNo) + " and " + std::to_string(secondNo) + ") is " + std::to_string(output));
}

int main()
{
	int choice;

	displayTitle();
	
	std::cin >> choice;

	if (std::cin.good())
	{
		switch (choice)
		{
		case 0:
			exit(0);
		case 1: //Addition
			addition();
			break;
		case 2: //Subtraction
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		default:
			print("Invalid choice, try again...");
			break;
		}

		
	}
}