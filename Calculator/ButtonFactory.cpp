#include "ButtonFactory.h"
#include "wx/wx.h"

ButtonFactory::ButtonFactory(CalculatorWindow* window)
{
	mWindow = window;
	mWidth = window->GetSize().x;
	mHeight = window->GetSize().y;
	font.SetPointSize(18);
}

wxButton* ButtonFactory::Create0Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "0", wxPoint(mMargin, mHeight - mSize.y - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create1Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "1", wxPoint(mMargin, mHeight - mSize.y * 2 - mSpacing - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create2Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "2", wxPoint(mMargin + mSize.x + mSpacing, mHeight - mSize.y * 2 - mSpacing - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create3Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "3", wxPoint(mMargin + mSize.x * 2 + mSpacing * 2, mHeight - mSize.y * 2 - mSpacing - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create4Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "4", wxPoint(mMargin, mHeight - mSize.y * 3 - mSpacing * 2 - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create5Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "5", wxPoint(mMargin + mSize.x + mSpacing, mHeight - mSize.y * 3 - mSpacing * 2 - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create6Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "6", wxPoint(mMargin + mSize.x * 2 + mSpacing * 2, mHeight - mSize.y * 3 - mSpacing * 2 - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create7Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "7", wxPoint(mMargin, mHeight - mSize.y * 4 - mSpacing * 3 - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create8Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "8", wxPoint(mMargin + mSize.x + mSpacing, mHeight - mSize.y * 4 - mSpacing * 3 - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::Create9Button()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "9", wxPoint(mMargin + mSize.x * 2 + mSpacing * 2, mHeight - mSize.y * 4 - mSpacing * 3 - mMargin - 40), mSize);
		btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateAddButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "+", wxPoint(mMargin + mSize.x * 3 + mSpacing * 3, mHeight - mSize.y * 2 - mSpacing - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateSubtractButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "-", wxPoint(mMargin + mSize.x * 3 + mSpacing * 3, mHeight - mSize.y * 3 - mSpacing * 2 - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateMultiplyButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "X", wxPoint(mMargin + mSize.x * 3 + mSpacing * 3, mHeight - mSize.y * 4 - mSpacing * 3 - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateDivideButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "÷", wxPoint(mMargin + mSize.x * 3 + mSpacing * 3, mHeight - mSize.y * 5 - mSpacing * 4 - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateModulusButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "%", wxPoint(mMargin + mSize.x * 2 + mSpacing * 2, mHeight - mSize.y * 5 - mSpacing * 4 - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateNegativeButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "(-)", wxPoint(mMargin + mSize.x + mSpacing, mHeight - mSize.y * 5 - mSpacing * 4 - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreatePeriodButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, ".", wxPoint(mMargin + mSize.x + mSpacing, mHeight - mSize.y - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateClearButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "Clear", wxPoint(mMargin, mHeight - mSize.y * 5 - mSpacing * 4 - mMargin - 40), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateEnterButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "=", wxPoint(mMargin + mSize.x * 2 + mSpacing * 2, mHeight - mSize.y - mMargin - 40), wxSize(mSize.x * 2 + mSpacing, mSize.y));
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateDecimalButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "DEC", wxPoint(mMargin, 150), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateBinaryButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "BIN", wxPoint(mMargin + mSize.x + mSpacing * 1.5, 150), mSize);
	btn->SetFont(font);
	return btn;
}

wxButton* ButtonFactory::CreateHexadecimalButton()
{
	wxButton* btn = new wxButton(mWindow, wxID_ANY, "HEX", wxPoint(mMargin + mSize.x * 2 + mSpacing * 3, 150), mSize);
	btn->SetFont(font);
	return btn;
}

int ButtonFactory::GetMargin()
{
	return mMargin;
}

int ButtonFactory::GetSpacing()
{
	return mSpacing;
}

wxSize ButtonFactory::GetSize()
{
	return mSize;
}

void ButtonFactory::SetSize(wxSize size)
{
	mSize = size;
}

void ButtonFactory::CreateAllButtons()
{
	Create0Button();
	Create1Button();
	Create2Button();
	Create3Button();
	Create4Button();
	Create5Button();
	Create6Button();
	Create7Button();
	Create8Button();
	Create9Button();
	CreateAddButton();
	CreateSubtractButton();
	CreateMultiplyButton();
	CreateDivideButton();
	CreateModulusButton();
	CreateNegativeButton();
	CreatePeriodButton();
	CreateClearButton();
	CreateEnterButton();
	SetSize(wxSize(mWidth / 3 - (mMargin * 2 / 3) - mSpacing * 2, mSize.y / 2));
	CreateDecimalButton();
	CreateBinaryButton();
	CreateHexadecimalButton();
}
