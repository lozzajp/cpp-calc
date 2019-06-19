#include "pch.h"
#include "Controller.h"

#include "Calculator.h"
#include <iostream>
#include <string>

bool Controller::Continue()
{
	return ShouldContinue;
}

void Controller::GatherInput()
{
	std::cin.clear();
	std::cout << "Please select an operation\n\n";
	std::cout << "1. Addition\n" << "2. Subtraction\n" << "3. Multiplication\n" << "4. Division\n\n";

	std::cout << "Operation: ";
	std::string selection;
	std::getline(std::cin, selection);
	std::cout << "\n";

	std::cout << "Please enter the LHS number: ";
	float lhsNumber;
	std::cin >> lhsNumber;
	std::cout << "\n";

	std::cout << "Please enter the RHS number: ";
	float rhsNumber;
	std::cin >> rhsNumber;
	std::cout << "\n";

	Calculator calculator;
	std::cout << "Addition Result: " << calculator.Add(lhsNumber, rhsNumber) << "\n";

	char shouldContinue;
	std::cout << "Continue?\n" << "Y/N: ";
	std::cin >> shouldContinue;
	ShouldContinue = (shouldContinue == 'Y' || shouldContinue == 'y');
	std::cin.clear();
}
