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
		
		TEST_METHOD(getPerimeterFunction_LegnthandWidth_Equal)
		{
			//testing perimeter function using 2 as length and 87 as width to equal 178 perimeter
			int perimeter = 0;
			int length = 2;
			int width = 87;
			perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(178, perimeter);

		}
		TEST_METHOD(getAreaFunction_LengthandWidth_Equal)
		{
			//testing area function using 4 as length and 99 as width to equal 396 area
			int area = 0;
			int length = 4;
			int width = 99;
			area = getArea(&length, &width);
			Assert::AreEqual(396, area);

		}
		TEST_METHOD(setLengthFunction1_LengthandInput_Equal)
		{
			//testing length function using length of 98 and input of 6 
			int length = 98;
			int input = 6;
			setLength(input, &length);
			Assert::AreEqual(input, length);

		}

		TEST_METHOD(setLengthFuction2_LengthandInput_NotSame)
		{
			//testing length function by using length of 44 and input of -4 which are not equal 
			int length = 44;
			int input = -4;
			setLength(input, &length);
			Assert::AreNotSame(input, length);

		}

		TEST_METHOD(setLengthFunction3_LengthandInput_NotEqual)
		{
			//testing length function by using length of 198 and input of 3 which are not equal
			int length = 198;
			int input = 100;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);

		}

		TEST_METHOD(setWidthFunction1_WidthandInput_True)
		{
			//testing width function using width of 4 and input of 87  
			int width = 4;
			int input = 87;
			setWidth(input, &width);
			Assert::IsTrue(input == width);
		}

		TEST_METHOD(setWidthFunction2_WidthandInput_Notsame)
		{
			//testing width function by using width of 164 and input of 12 which are not equal
			int width = 164;
			int input = -34;
			setWidth(input, &width);
			Assert::AreNotSame(input, width);
		}

		TEST_METHOD(setWidthFunction3_WidthandInput_NotEqual)
		{
			//testing length function by using width of -27 and input of 187 which are not equal
			int width = -27;
			int input = 187;
			setWidth(input, &width);
			Assert::AreNotEqual(input, width);

		}

	};
}
