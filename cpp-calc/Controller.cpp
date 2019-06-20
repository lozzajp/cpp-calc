#include "pch.h"
#include "Controller.h"

#include "Calculator.h"
#include <iostream>

bool Controller::Continue()
{
	return ShouldContinue;
}

void Controller::Run()
{
	GatherInput();

	Execute();

	char shouldContinue;
	std::cout << "Continue?\n" << "Y/N: ";
	std::cin >> shouldContinue;
	ShouldContinue = (shouldContinue == 'Y' || shouldContinue == 'y');
	std::cin.clear();
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

	OperationToUse = ParseOperation(selection);

	std::cout << "Please enter the LHS number: ";
	std::cin >> LhsNumber;
	std::cout << "\n";

	std::cout << "Please enter the RHS number: ";
	std::cin >> RhsNumber;
	std::cout << "\n";
}

void Controller::Execute()
{
	Calculator calculator;

	switch (OperationToUse)
	{
		case Operation::Addition:
		{
			std::cout << "Addition Result: " << calculator.Add(LhsNumber, RhsNumber) << "\n";
			break;
		}
		case Operation::Subtraction:
		{
			std::cout << "Subtraction Result: " << calculator.Subtract(LhsNumber, RhsNumber) << "\n";
			break;
		}
		case Operation::Multiplication:
		{
			std::cout << "Multiplication Result: " << calculator.Multiply(LhsNumber, RhsNumber) << "\n";
			break;
		}
		case Operation::Division:
		{
			std::cout << "Division Result: " << calculator.Divide(LhsNumber, RhsNumber) << "\n";
			break;
		}
		default:
			break;
	}
}

Controller::Operation Controller::ParseOperation(std::string operation)
{
	if (operation == "1")
	{
		return Operation::Addition;
	}
	else if (operation == "2")
	{
		return Operation::Subtraction;
	}
	else if (operation == "3")
	{
		return Operation::Multiplication;
	}
	else if (operation == "4")
	{
		return Operation::Division;
	}

	return Operation::Addition;
}
