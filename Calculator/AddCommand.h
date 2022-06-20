#pragma once
#include "IBaseCommand.h"

class AddCommand : public IBaseCommand
{
private:
	float _left;
	float _right;
public:
	AddCommand(float left, float right)
	{
		_left = left;
		_right = right;
	}
	float Execute()
	{
		return _left + _right;
	}
};
