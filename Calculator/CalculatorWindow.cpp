#include "CalculatorWindow.h"
#include <string>
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <sstream>
#include <iomanip>


wxBEGIN_EVENT_TABLE(CalculatorWindow, wxFrame)
EVT_BUTTON(wxID_ANY, CalculatorWindow::OnButtonClick)
wxEND_EVENT_TABLE()

CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

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
	std::string input = txtDisplay->GetValue().ToStdString();
	std::string output = "";
	std::stringstream stream;
	float value = 0;

	if (label == "Clear")
	{
		txtDisplay->Clear();
		processor->SetBaseNumber(0);
	}
	else if (label == "=")
	{
		value = processor->Evaluate(input);
		stream << std::fixed << std::setprecision(2) << value;
		output = stream.str();
	}
	else if (label == "DEC")
	{
		if (processor->GetBaseNumber() == 0)
			processor->SetBaseNumber(std::stoi(input));
		output = processor->GetDecimal();
	}
	else if (label == "BIN")
	{
		if (processor->GetBaseNumber() == 0)
			processor->SetBaseNumber(std::stoi(input));
		output = processor->GetBinary();
	}
	else if (label == "HEX")
	{
		if (processor->GetBaseNumber() == 0)
			processor->SetBaseNumber(std::stoi(input));
		output = processor->GetHexadecimal();
	}
	else
	{
		txtDisplay->AppendText(label);
		return;
	}

	txtDisplay->SetLabelText(output);
}
