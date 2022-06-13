#pragma once
#include "wx/wx.h"

class CalculatorWindow : public wxFrame
{
private:
	wxTextCtrl* txtDisplay;
public:
	CalculatorWindow();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
};
