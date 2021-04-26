#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1., disc(1, 3, 2), 0.1);
		}
	};
}
