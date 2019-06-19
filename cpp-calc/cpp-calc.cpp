#include "pch.h"
#include <iostream>
#include <string>

#include "Calculator.h"

int main()
{
    std::cout << "Hello Calculator\n\n" << "Please select an operation\n\n"; 

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
	std::cout << "Addition Result: " << calculator.Add(lhsNumber, rhsNumber);
}