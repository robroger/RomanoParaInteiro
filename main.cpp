#include <stdlib.h>
#include <stdio.h>
#include <gtest/gtest.h>
#include "romanConverter.hpp"

// Teste para tipos básicos
TEST(RomanConverterTest, TIPO1){
	EXPECT_EQ(1, romanConverter((char*)"I"));
	EXPECT_EQ(5, romanConverter((char*)"V"));
	EXPECT_EQ(10, romanConverter((char*)"X"));
	EXPECT_EQ(50, romanConverter((char*)"L"));
	EXPECT_EQ(100, romanConverter((char*)"C"));
	EXPECT_EQ(500, romanConverter((char*)"D"));
	EXPECT_EQ(1000, romanConverter((char*)"M"));
}

//Teste para tipos que precisam de soma
TEST(RomanConverterTest, TIPO2){
	EXPECT_EQ(6, romanConverter((char*)"VI"));
	EXPECT_EQ(13, romanConverter((char*)"XIII"));
	EXPECT_EQ(355, romanConverter((char*)"CCCLV"));
	EXPECT_EQ(523, romanConverter((char*)"DXXIII"));
	EXPECT_EQ(808, romanConverter((char*)"DCCCVIII"));
	EXPECT_EQ(1130, romanConverter((char*)"MCXXX"));
	EXPECT_EQ(2050, romanConverter((char*)"MML"));	
}

//Teste para tipos que precisam de subtração
TEST(RomanConverterTest, TIPO3){
	EXPECT_EQ(4, romanConverter((char*)"IV"));
	EXPECT_EQ(49, romanConverter((char*)"XLIX"));
	EXPECT_EQ(434, romanConverter((char*)"CDXXXIII"));
	EXPECT_EQ(659, romanConverter((char*)"DCLIX"));
	EXPECT_EQ(1474, romanConverter((char*)"MCDLXXIV"));
	EXPECT_EQ(1511, romanConverter((char*)"MDXI"));
	EXPECT_EQ(1760, romanConverter((char*)"MDCCLX"));	
}

int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}