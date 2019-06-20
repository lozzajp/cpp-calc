#include "pch.h"
#include <iostream>

#include "Calculator.h"

static int RunAllTest()
{
	Calculator calculator;

	if (calculator.Add(3, 5) != 8)
	{
		std::cout << "cannot add 3, 5 correctly to 8\n";
		return 1;
	}

	if (calculator.Subtract(13, 5) != 8)
	{
		std::cout << "cannot subract 13, 5 correctly to 8\n";
		return 1;
	}

	if (calculator.Multiply(2, 4) != 8)
	{
		std::cout << "cannot multiply 2, 4 correctly to 8\n";
		return 1;
	}

	if (calculator.Divide(16, 2) != 8)
	{
		std::cout << "cannot divide 16, 2 correctly to 8\n";
		return 1;
	}

	return 0;
}
