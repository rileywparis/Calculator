#include "CalculatorApp.h"

wxIMPLEMENT_APP(CalculatorApp);

bool CalculatorApp::OnInit()
{
	window = new CalculatorWindow();
	window->Show();
	return true;
}
