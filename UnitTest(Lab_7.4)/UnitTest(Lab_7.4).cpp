#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_7.4/Goods.h"
#include "../Lab_7.4/Sort.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab74
{
	TEST_CLASS(UnitTestLab74)
	{
	public:
		
		TEST_METHOD(Test_Map_Goods_List) {
			std::map<int, Goods> list;
			list[0].name = "wowa"; 
			list[0].cost = 1200;
			list[0].kilkist = 20;
			list[0].mass = 2.8;

			list[1].name = "sdf";
			list[1].cost = 900;
			list[1].kilkist = 10;
			list[1].mass = 3.8;

			list[2].name = "werwe";
			list[2].cost = 400;
			list[2].kilkist = 660;
			list[2].mass = 1.8;

			list[3].name = "jhjg";
			list[3].cost = 770;
			list[3].kilkist = 2240;
			list[3].mass = 4.8;

			Sort(list);
			Assert::AreEqual(list[0].cost, 400);
		}
	};
}
