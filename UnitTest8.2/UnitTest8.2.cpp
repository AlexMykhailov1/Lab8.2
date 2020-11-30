#include "pch.h"
#include "CppUnitTest.h"
#include "string"
#include "../Lab8.2/Lab8.2.cpp"

using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "abckabc";

			int i = FindindexFirst(s);

			Assert::AreEqual(i, 0);
		}
	};
}
