#pragma once
#include "wx/wx.h"

class CalculatorWindow : public wxFrame
{
private:
	int margin = 10;
	int spacing = 5;
	wxSize size = wxSize(75, 75);
	wxButton* btn0;
	wxButton* btnPrd;
	wxButton* btnEnter;
	wxButton* btnTemp;
	wxButton* btn1;
	wxButton* btn2;
	wxButton* btn3;
	wxButton* btnPlus;
	wxButton* btn4;
	wxButton* btn5;
	wxButton* btn6;
	wxButton* btnMinus;
	wxButton* btn7;
	wxButton* btn8;
	wxButton* btn9;
	wxButton* btnMult;
	wxButton* btnClear;
	wxButton* btnNeg;
	wxButton* btnMod;
	wxButton* btnDive;
	wxButton* btnDec;
	wxButton* btnBin;
	wxButton* btnHex;
	wxStaticText* txtDisplay;
public:
	CalculatorWindow();
};
