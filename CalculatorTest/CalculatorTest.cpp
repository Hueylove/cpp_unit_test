#include "pch.h"
#include "CppUnitTest.h"
#include "calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTest
{
	TEST_CLASS(CalculatorTest)
	{
	public:
		
		TEST_METHOD(AddTest)
		{
            Calculator cal;
            int x = 1, y = 3;
            int expected = 4;
            int actual = cal.Add(x, y);
            Assert::AreEqual(expected, actual);
		}
        TEST_METHOD(MultiplyTest)
        {
            Calculator cal;
            int x = 1, y = 3;
            int expected = 3;
            int actual = cal.Multiply(x, y);
            Assert::AreEqual(expected, actual);
        }
	};
}
