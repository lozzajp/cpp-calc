#include "pch.h"
#include <iostream>

#include "Calculator.h"

static int RunAllTest()
{
	Calculator calculator;	
	if (calculator.Add(3, 5) != 8)
	{
		std::cout << "cannot add 3, 5 correctly to 8";
		return 1;
	}

	return 0;
}
