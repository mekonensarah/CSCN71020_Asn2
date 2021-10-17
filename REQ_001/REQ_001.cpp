#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{

#include "main.h"

}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(getPerimeterFunction_)
		{
			//testing perimeter function using 2 as length and 87 as width to equal 178 perimeter
			int perimeter = 0;
			int length = 2;
			int width = 87;
			perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(178, perimeter);

		}

		TEST_METHOD(getAreaFunction_)
		{
			//testing area function using 4 as length and 99 as width to equal 396 area
			int area = 0;
			int length = 4;
			int width = 99;
			area = getArea(&length, &width);
			Assert::AreEqual(396, area);

		}
		

	};
}
