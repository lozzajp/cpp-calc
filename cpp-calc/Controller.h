#pragma once
class Controller
{
public:
	bool Continue();
	void GatherInput();
private:
	bool ShouldContinue = true;
};

