#pragma once
#include "IBaseCommand.h"

class ModulusCommand : public IBaseCommand
{
private:
	float _left;
	float _right;
public:
	ModulusCommand(float left, float right)
	{
		_left = left;
		_right = right;
	}
	float Execute()
	{
		return (int)_left % (int)_right;
	}
};
