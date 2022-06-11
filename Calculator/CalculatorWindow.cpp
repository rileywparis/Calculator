#include "CalculatorWindow.h"
#include <string>

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
EVT_BUTTON(wxID_ANY, CalculatorWindow::OnButtonClick)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 200), wxSize(350, 650))
{
	this->SetWindowStyle(wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER & ~wxMAXIMIZE_BOX);
	int xSize = this->GetSize().x;
	int ySize = this->GetSize().y;

	std::string labels[5][4] = { {"0", ".", "=", "="}, {"1", "2", "3", "+"}, {"4", "5", "6", "-"}, {"7", "8", "9", "X"}, {"Clear", "(-)", "%", "÷"} };
	wxFont font;
	font.SetPointSize(18);

	wxButton* btn = nullptr;
	for (int r = 0; r < 5; r++)
		for (int c = 0; c < 4; c++)
		{
			if (r == 0 && c == 2)
				btn = new wxButton(this, r * 4 + c, "=", wxPoint(margin + size.x * 2 + spacing * 2, ySize - size.y - margin - 40), wxSize(size.x * 2 + spacing, size.y));
			else if (!(r == 0 && c == 3))
				btn = new wxButton(this, r * 4 + c, labels[r][c], wxPoint(margin + size.x * c + spacing * c, ySize - size.y * (r + 1) - spacing * r - margin - 40), size);
			btn->SetFont(font);
		}

	wxSize baseSize = wxSize(xSize / 3 - (margin * 2 / 3) - spacing * 2, size.y / 2);
	btnDec = new wxButton(this, 30, "DEC", wxPoint(margin, ySize - size.y * 6 - spacing * 5 - margin - 15), baseSize);
	btnBin = new wxButton(this, 31, "BIN", wxPoint(margin + baseSize.x + spacing * 1.5, ySize - size.y * 6 - spacing * 5 - margin - 15), baseSize);
	btnHex = new wxButton(this, 32, "HEX", wxPoint(margin + baseSize.x * 2 + spacing * 3, ySize - size.y * 6 - spacing * 5 - margin - 15), baseSize);
	btnDec->SetFont(font);
	btnBin->SetFont(font);
	btnHex->SetFont(font);

	txtDisplay = new wxTextCtrl(this, wxID_ANY, "", wxPoint(margin, margin), wxSize(xSize - margin * 4, 65));
	font.SetPointSize(36);
	txtDisplay->SetFont(font);
	txtDisplay->SetBackgroundColour(*wxWHITE);
	txtDisplay->SetWindowStyle(wxALIGN_RIGHT);
};

void CalculatorWindow::OnButtonClick(wxCommandEvent& evt)
{
	switch (evt.GetId())
	{
	case 16:
		txtDisplay->Clear();
		break;
	default:
		wxButton* btn = ((wxButton*)evt.GetEventObject());
		btn->GetLabel();
		txtDisplay->AppendText(btn->GetLabel());
	}
}
