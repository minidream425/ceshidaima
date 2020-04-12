#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			TEST_CLASS(UnitTest1) {
		public:

			TEST_METHOD(TestMethod1)
			{
				int max = 0, i, j, x = 4, sum, h = 0;
				int s[4] = { 1,2,3,4 }, a[50];

				for (i = 0; i < x; i++)
				{
					sum = s[i];
					for (j = i + 1; j <= x; j++)
					{
						a[h] = sum;
						sum = sum + s[j];
						h++;
						a[h] = sum;
					}
					h++;
				}
				for (i = 0; i <= h; i++)
				{
					if (a[i] >= max)
						max = a[i];
				}
				int real = 10;
				Assert::AreEqual(max, real);
			}
			TEST_METHOD(TestMethod2)
			{
				int max = 0, i, j, x = 4, sum, h = 0;
				int s[4] = { -2,8,-4,11 }, a[50];

				for (i = 0; i < x; i++)
				{
					sum = s[i];
					for (j = i + 1; j <= x; j++)
					{
						a[h] = sum;
						sum = sum + s[j];
						h++;
						a[h] = sum;
					}
					h++;
				}
				for (i = 0; i <= h; i++)
				{
					if (a[i] >= max)
						max = a[i];
				}
				int real = 15;
				Assert::AreEqual(max, real);
			}

			};
		}

	};
}