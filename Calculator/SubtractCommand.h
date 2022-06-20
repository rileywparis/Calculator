#pragma once
#include "IBaseCommand.h"

class SubtractCommand : public IBaseCommand
{
private:
	float _left;
	float _right;
public:
	SubtractCommand(float left, float right)
	{
		_left = left;
		_right = right;
	}
	float Execute()
	{
		return _left - _right;
	}
};
