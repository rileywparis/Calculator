#pragma once
#include "wx/wx.h"
#include "CalculatorWindow.h"

class CalculatorApp : public wxApp
{
	CalculatorWindow* window = nullptr;
public:
	virtual bool OnInit();
};
