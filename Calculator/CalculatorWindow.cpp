#include "CalculatorWindow.h"
#include <string>

#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
EVT_BUTTON(wxID_ANY, CalculatorWindow::OnButtonClick)
wxEND_EVENT_TABLE()

CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 200), wxSize(350, 650))
{
	this->SetWindowStyle(wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER & ~wxMAXIMIZE_BOX);
	ButtonFactory factory = ButtonFactory(this);

	factory.CreateAllButtons();

	txtDisplay = new wxTextCtrl(this, wxID_ANY, "", wxPoint(factory.GetMargin(), factory.GetMargin()), wxSize(this->GetSize().x - factory.GetMargin() * 4, 65));
	wxFont font;
	font.SetPointSize(36);
	txtDisplay->SetFont(font);
	txtDisplay->SetBackgroundColour(*wxWHITE);
	txtDisplay->SetWindowStyle(wxALIGN_RIGHT);
};

void CalculatorWindow::OnButtonClick(wxCommandEvent& evt)
{
	wxString label = ((wxButton*)evt.GetEventObject())->GetLabel();
	if (label == "Clear")
		txtDisplay->Clear();
	else
		txtDisplay->AppendText(label);
}
