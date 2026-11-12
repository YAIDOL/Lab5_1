#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/program.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestF)
		{
			const double a = f(1, 0, 3);
			Assert::AreEqual(9.0, a);
		}
	};
}
