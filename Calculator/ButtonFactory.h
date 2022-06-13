#pragma once
#include "CalculatorWindow.h"

class ButtonFactory
{
private:
	CalculatorWindow* mWindow;
	wxFont font;
	wxSize mSize = wxSize(75, 75);
	int mMargin = 10;
	int mSpacing = 5;
	int mWidth;
	int mHeight;
public:
	ButtonFactory(CalculatorWindow* window);
	wxButton* Create0Button();
	wxButton* Create1Button();
	wxButton* Create2Button();
	wxButton* Create3Button();
	wxButton* Create4Button();
	wxButton* Create5Button();
	wxButton* Create6Button();
	wxButton* Create7Button();
	wxButton* Create8Button();
	wxButton* Create9Button();
	wxButton* CreateAddButton();
	wxButton* CreateSubtractButton();
	wxButton* CreateMultiplyButton();
	wxButton* CreateDivideButton();
	wxButton* CreateModulusButton();
	wxButton* CreateNegativeButton();
	wxButton* CreatePeriodButton();
	wxButton* CreateClearButton();
	wxButton* CreateEnterButton();
	wxButton* CreateDecimalButton();
	wxButton* CreateBinaryButton();
	wxButton* CreateHexadecimalButton();
	void CreateAllButtons();
	int GetMargin();
	int GetSpacing();
	wxSize GetSize();
	void SetSize(wxSize temp);
};

