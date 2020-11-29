#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3-r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63r
{
	TEST_CLASS(UnitTest63r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int mass[6] = { -5, 8, 6, 4, 3, -2};
			Assert::AreEqual(Sum(mass, 6,0), -2);
			Assert::AreEqual(Sum<int>(mass, 6,0), -2);
		}
	};
}


