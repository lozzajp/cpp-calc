#pragma once

#include <string>
class Controller
{
public:
	bool Continue();
	void Run();
private:
	void GatherInput();
	void Execute();

	enum Operation {
		Addition,
		Subtraction,
		Multiplication,
		Division
	};

	Operation ParseOperation(std::string operation);

	Operation OperationToUse;
	float LhsNumber;
	float RhsNumber;
	bool ShouldContinue = true;
};

