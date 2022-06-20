#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplicationCommand.h"
#include "DivisionCommand.h"
#include "ModulusCommand.h"

class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	int baseNumber = 0;
	std::vector<IBaseCommand*> queue;
	CalculatorProcessor() {}
public:
	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
			_processor = new CalculatorProcessor();
		return _processor;
	}

	void SetBaseNumber(int number)
	{
		baseNumber = number;
	}

	int GetBaseNumber()
	{
		return baseNumber;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}

	std::string GetHexadecimal()
	{
		std::string result = "";
		int number = baseNumber;
		while (number > 0)
		{
			int mod = number % 16;
			if (mod < 10)
				result = std::to_string(mod) + result;
			else
				result = (char)(65 + mod - 10) + result;
			number = number / 16;
		}
		result = "0x" + result;
		return result;
	}

	std::string GetBinary()
	{
		std::string result = "";
		int number = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (number % 2 == 0)
				result = "0" + result;
			else
				result = "1" + result;
			number /= 2;
		}
		return result;
	}

	float Evaluate(std::string expression)
	{
		char delimeters[5] = { '+', '-', 'X', '÷', '%' };
		float left;
		float right;
		char symbol = '0';
		for (int i = 0; i < expression.size(); i++)
			for (char c : delimeters)
				if (expression[i] == c)
				{
					symbol = expression[i];
					left = std::stof(expression.substr(0, i));
					right = std::stof(expression.substr(i + 1, expression.size()));
					goto exit;
				}
	exit:;
		if (symbol == '+')
			queue.push_back(new AddCommand(left, right));
		else if (symbol == '-')
			queue.push_back(new SubtractCommand(left, right));
		else if (symbol == 'X')
			queue.push_back(new MultiplicationCommand(left, right));
		else if (symbol == '÷')
			queue.push_back(new DivisionCommand(left, right));
		else if (symbol == '%')
			queue.push_back(new ModulusCommand(left, right));
		float result = 0;
		result = queue.at(0)->Execute();
		queue.erase(queue.begin());
		return result;
	}
};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

