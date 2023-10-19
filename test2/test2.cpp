#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test2
{
	TEST_CLASS(test2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(A(1, 1, 1), -0.5);
		}
	};
}
