#include "CalculatorWindow.h"

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 200), wxSize(350, 650))
{
	int xSize = this->GetSize().x;
	int ySize = this->GetSize().y;

	btn0 = new wxButton(this, wxID_ANY, "0", wxPoint(margin, ySize - size.y - margin - 40), size);
	btnPrd = new wxButton(this, wxID_ANY, ".", wxPoint(margin + size.x + spacing, ySize - size.y - margin - 40), size);
	btnEnter = new wxButton(this, wxID_ANY, "=", wxPoint(margin + size.x * 2 + spacing * 2, ySize - size.y - margin - 40), wxSize(size.x * 2 + spacing, size.y));
	//btnEnter = new wxButton(this, wxID_ANY, "=", wxPoint(margin + size.x * 3 + spacing * 3, ySize - size.y - margin - 40), wxSize(size.x * 2, size.y));

	btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(margin, ySize - size.y * 2 - spacing - margin - 40), size);
	btn2 = new wxButton(this, wxID_ANY, "2", wxPoint(margin + size.x + spacing, ySize - size.y * 2 - spacing - margin - 40), size);
	btn3 = new wxButton(this, wxID_ANY, "3", wxPoint(margin + size.x * 2 + spacing * 2, ySize - size.y * 2 - spacing - margin - 40), size);
	btnPlus = new wxButton(this, wxID_ANY, "+", wxPoint(margin + size.x * 3 + spacing * 3, ySize - size.y * 2 - spacing - margin - 40), size);

	btn4 = new wxButton(this, wxID_ANY, "4", wxPoint(margin, ySize - size.y * 3 - spacing * 2 - margin - 40), size);
	btn5 = new wxButton(this, wxID_ANY, "5", wxPoint(margin + size.x + spacing, ySize - size.y * 3 - spacing * 2 - margin - 40), size);
	btn6 = new wxButton(this, wxID_ANY, "6", wxPoint(margin + size.x * 2 + spacing * 2, ySize - size.y * 3 - spacing * 2 - margin - 40), size);
	btnMinus = new wxButton(this, wxID_ANY, "-", wxPoint(margin + size.x * 3 + spacing * 3, ySize - size.y * 3 - spacing * 2 - margin - 40), size);

	btn7 = new wxButton(this, wxID_ANY, "7", wxPoint(margin, ySize - size.y * 4 - spacing * 3 - margin - 40), size);
	btn8 = new wxButton(this, wxID_ANY, "8", wxPoint(margin + size.x + spacing, ySize - size.y * 4 - spacing * 3 - margin - 40), size);
	btn9 = new wxButton(this, wxID_ANY, "9", wxPoint(margin + size.x * 2 + spacing * 2, ySize - size.y * 4 - spacing * 3 - margin - 40), size);
	btnMult = new wxButton(this, wxID_ANY, "X", wxPoint(margin + size.x * 3 + spacing * 3, ySize - size.y * 4 - spacing * 3 - margin - 40), size);

	btnClear = new wxButton(this, wxID_ANY, "Clear", wxPoint(margin, ySize - size.y * 5 - spacing * 4 - margin - 40), size);
	btnNeg = new wxButton(this, wxID_ANY, "(-)", wxPoint(margin + size.x + spacing, ySize - size.y * 5 - spacing * 4 - margin - 40), size);
	btnMod = new wxButton(this, wxID_ANY, "%", wxPoint(margin + size.x * 2 + spacing * 2, ySize - size.y * 5 - spacing * 4 - margin - 40), size);
	btnDive = new wxButton(this, wxID_ANY, "÷", wxPoint(margin + size.x * 3 + spacing * 3, ySize - size.y * 5 - spacing * 4 - margin - 40), size);

	wxSize baseSize = wxSize(xSize / 3 - (margin * 2 / 3) - spacing * 2, size.y / 2);
	btnDec = new wxButton(this, wxID_ANY, "DEC", wxPoint(margin, ySize - size.y * 6 - spacing * 5 - margin - 15), baseSize);
	btnBin = new wxButton(this, wxID_ANY, "BIN", wxPoint(margin + baseSize.x + spacing * 1.5, ySize - size.y * 6 - spacing * 5 - margin - 15), baseSize);
	btnHex = new wxButton(this, wxID_ANY, "HEX", wxPoint(margin + baseSize.x * 2 + spacing * 3, ySize - size.y * 6 - spacing * 5 - margin - 15), baseSize);

	txtDisplay = new wxStaticText(this, wxID_ANY, "88888888", wxPoint(margin, margin), wxSize(xSize - margin * 4, 50));
	wxFont font = txtDisplay->GetFont();
	font.SetPointSize(36);
	txtDisplay->SetFont(font);
	txtDisplay->SetBackgroundColour(*wxWHITE);
	txtDisplay->SetWindowStyle(wxALIGN_RIGHT);
	//txtDisplay->SetLabelText("Test");
};
