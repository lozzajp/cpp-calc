#include "pch.h"
#include <iostream>
#include <string>

#include "Calculator.h"
#include "Controller.h"
#include "TestHarness.cpp"

int main()
{
	int tests = RunAllTest();
	if (tests != 0)
	{
		std::cout << tests;
		return tests;
	}

    std::cout << "Hello Calculator\n\n"; 

	Controller controller;
	while (controller.Continue())
	{
		controller.Run();
	}
}