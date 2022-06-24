#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorProcessorTests
{
	TEST_CLASS(CalculatorProcessorTests)
	{
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	public:
		TEST_METHOD(AddTwoPlusTwoEqualsFour)
		{
			float answer = processor->Evaluate("2+2");
			Assert::AreEqual(answer, 4.0f);
		}

		TEST_METHOD(ThreeMinusSeven)
		{
			float answer = processor->Evaluate("3-7");
			Assert::AreEqual(answer, -4.0f);
		}

		TEST_METHOD(EightTimesFourPointSix)
		{
			float answer = processor->Evaluate("8X4.6");
			Assert::AreEqual(answer, 36.8f);
		}

		TEST_METHOD(FifteenDividedByThree)
		{
			float answer = processor->Evaluate("15÷3");
			Assert::AreEqual(answer, 5.0f);
		}

		TEST_METHOD(EightModThree)
		{
			float answer = processor->Evaluate("8%3");
			Assert::AreEqual(answer, 2.0f);
		}

		TEST_METHOD(TrailingSymbol)
		{
			float answer = processor->Evaluate("2+2+6");
			Assert::AreEqual(answer, 4.0f);
		}

		TEST_METHOD(EightTimesZero)
		{
			float answer = processor->Evaluate("8X0");
			Assert::AreEqual(answer, 0.0f);
		}

		TEST_METHOD(ZeroDividedByThree)
		{
			float answer = processor->Evaluate("0÷3");
			Assert::AreEqual(answer, 0.0f);
		}

		TEST_METHOD(ThreeOneNineEightToHex)
		{
			processor->SetBaseNumber(3198);
			std::string answer = processor->GetHexadecimal();
			Assert::AreEqual(answer, (std::string)("0xC7E"));
		}

		TEST_METHOD(FortyFourToBin)
		{
			processor->SetBaseNumber(44);
			std::string answer = processor->GetBinary();
			Assert::AreEqual(answer, (std::string)("00000000000000000000000000101100"));
		}
	};
}
