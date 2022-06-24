#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/CalculatorWindow.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtonFactoryTests
{
	TEST_CLASS(ButtonFactoryTests)
	{
	
	public:
		CalculatorWindow* window = new CalculatorWindow();
		ButtonFactory factory = ButtonFactory(window);

		TEST_METHOD(GetEqualLabel)
		{
			wxButton* btn = factory.CreateEnterButton();
			Assert::AreEqual((std::string)btn->GetLabelText(), (std::string)"=");
		}

		TEST_METHOD(GetZeroLabel)
		{
			wxButton* btn = factory.Create0Button();
			Assert::AreEqual((std::string)btn->GetLabelText(), (std::string)"0");
		}

		TEST_METHOD(GetPeriodLabel)
		{
			wxButton* btn = factory.CreatePeriodButton();
			Assert::AreEqual((std::string)btn->GetLabelText(), (std::string)".");
		}

		TEST_METHOD(GetDivideLabel)
		{
			wxButton* btn = factory.CreateDivideButton();
			Assert::AreEqual((std::string)btn->GetLabelText(), (std::string)"÷");
		}

		TEST_METHOD(GetMultiplyLabel)
		{
			wxButton* btn = factory.CreateMultiplyButton();
			Assert::AreEqual((std::string)btn->GetLabelText(), (std::string)"X");
		}

		TEST_METHOD(GetModulusLabel)
		{
			wxButton* btn = factory.CreateModulusButton();
			Assert::AreEqual((std::string)btn->GetLabelText(), (std::string)"%");
		}

		TEST_METHOD(GetEqualId)
		{
			wxButton* btn = factory.CreateEnterButton();
			Assert::AreEqual(btn->GetId(), 100);
		}

		TEST_METHOD(GetDecId)
		{
			wxButton* btn = factory.CreateDecimalButton();
			Assert::AreEqual(btn->GetId(), 200);
		}

		TEST_METHOD(GetBinId)
		{
			wxButton* btn = factory.CreateBinaryButton();
			Assert::AreEqual(btn->GetId(), 201);
		}

		TEST_METHOD(GetHexId)
		{
			wxButton* btn = factory.CreateHexadecimalButton();
			Assert::AreEqual(btn->GetId(), 202);
		}
	};
}
