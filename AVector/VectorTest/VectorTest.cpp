#include "pch.h"
#include "CppUnitTest.h"
#include "../AVector/AVector.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VectorTest
{
	TEST_CLASS(VectorTest)
	{
	public:
		AVector vec;
		//1
		TEST_METHOD(getXTest)
		{
			Assert::AreEqual(0.f,vec.getX());
		}
		//2
		TEST_METHOD(getYTest)
		{
			Assert::AreEqual(0.f, vec.getY());
		}
		//3
		TEST_METHOD(getZTest)
		{
			Assert::AreEqual(0.f, vec.getZ());
		}
		//4
		TEST_METHOD(getMTest)
		{
			Assert::AreEqual(0.f, vec.getM());
		}
		//5
		TEST_METHOD(SetVector)
		{
			vec.setX(1);
			Assert::AreEqual(1.f, vec.getX());
		}
		//6
		TEST_METHOD(Sumaoperador)
		{
		AVector vecsuma(1,1,1,1);
			vec +=vecsuma;
			Assert::AreEqual(1.f, vec.getX());
		}
		//7
		TEST_METHOD(Resta)
		{
			AVector vecsuma(1, 1, 1, 1);
			vec -= vecsuma;
			Assert::AreEqual(-1.f, vec.getX());
		}
		//8
		TEST_METHOD(Multiplicacion)
		{
			Assert::AreEqual(0.f, vec.getX());
		}
		//9
		TEST_METHOD(igualacion)
		{
			AVector vecsuma(2, 2, 2, 2);
			vec = vecsuma;
			Assert::AreEqual(2.f, vec.getX());
		}
		//10
		TEST_METHOD(proPunto)
		{
			Assert::AreEqual(0.f, vec.getX());
		}
		//11
		TEST_METHOD(ProductoCruz)
		{
			Assert::AreEqual(0.f, vec.getX());
		}
		//12
		TEST_METHOD(magnitude)
		{
			Assert::AreEqual(0.f, vec.getX());
		}
		//13
		TEST_METHOD(normalize)
		{
			Assert::AreEqual(0.f, vec.getX());
		}
		//14
		TEST_METHOD(quickReverseSqrt2)
		{
			Assert::AreEqual(0.f, vec.getX());
		}
		//15
		TEST_METHOD(getxOperacion)
		{
			Assert::AreEqual(0.f, vec.getX());
		}

	};
}
