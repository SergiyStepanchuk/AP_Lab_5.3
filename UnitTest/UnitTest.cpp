#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(met_p)
		{
			double _p = p(5);
			Assert::IsFalse(abs(_p - 2.71165) > 0.00001, L"Incorrect method p!");
			_p = p(0.1);
			Assert::IsFalse(abs(_p - 1.00502) > 0.00001, L"Incorrect method p!");
		}
	};
}
