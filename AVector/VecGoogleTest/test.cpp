#include "pch.h"
#include <gtest/gtest.h>
#include "../AVector/AVector.h"

AVector vec;
TEST(getTest, getx) {

	EXPECT_EQ(0, vec.getX());
	EXPECT_TRUE(true);
}

TEST(getTest, gety) {
	EXPECT_EQ(0, vec.getY());
	EXPECT_TRUE(true);
}

TEST(getTest, getz) {
	EXPECT_EQ(0, vec.getZ());
	EXPECT_TRUE(true);
}

TEST(getTest, getm) {
	EXPECT_EQ(0, vec.getM());
	EXPECT_TRUE(true);
}

TEST(setVector, testsetVec) {
	vec.setX(1.0f);
	EXPECT_EQ(1, vec.getX());
	EXPECT_TRUE(true);
}

TEST(Operadores, testSuma) {
	AVector vecoperador(1,1,1,1);
	vec +=vecoperador;
	EXPECT_EQ(2, vec.getX());
	EXPECT_TRUE(true);
}

TEST(Operadores, testResta) {
	AVector vecoperador(1, 1, 1, 1);
	vec -= vecoperador;
	EXPECT_EQ(1, vec.getX());
	EXPECT_TRUE(true);
}

TEST(setVector, setY) {

	vec.setY(10);
	EXPECT_EQ(10, vec.getY());

	EXPECT_TRUE(true);
}

TEST(Operadores, testigualacion) {
	AVector vecoperador(10, 10, 10, 10);
	vec = vecoperador;
	EXPECT_EQ(vec.getX(), vecoperador.getX());

	EXPECT_TRUE(true);
}

TEST(proPunto, testProductoPunto) {
	AVector productocruz(10,1,1,1);
	AVector res=vec.ProductoCruz(productocruz);
	EXPECT_EQ(270,res.getY());
	EXPECT_TRUE(true);
}
TEST(ProductoCruz, testProductocruz) {
	AVector productocruz(10, 1, 1, 1);
	float res = vec.ProductoPunto(productocruz);
	EXPECT_EQ(360, res);
	EXPECT_TRUE(true);
}
TEST(magnitude, testMagnitude) {
	float res = vec.magnitude();
	EXPECT_EQ(52.0514641, res);
	EXPECT_TRUE(true);
}
TEST(normalize, testNormalize) {
	 vec.normalize();
	EXPECT_EQ(0.576352656, vec.getX());
	EXPECT_TRUE(true);
}
TEST(Operadores, testsumaY) {
	AVector vecoperadpr(10, 10, 10, 10);
	vec += vecoperadpr;
	EXPECT_EQ(20, vec.getX());
	EXPECT_TRUE(true);
}
TEST(Operadores, testsumaX) {
	AVector vecoperadpr(10,10,10,10);
	vec+=vecoperadpr;
	EXPECT_EQ(30,vec.getY());
	EXPECT_TRUE(true);
}
