#include <stdlib.h>
#include <stdio.h>
#include <gtest/gtest.h>
#include "romanConverter.hpp"

//Teste para inválidos
//Teste para valores inválidos
TEST(RomanConverterTest, VALORINVALIDO){
	EXPECT_EQ(-1, romanConverter((char*)"1"));
	EXPECT_EQ(-1, romanConverter((char*)"wdcsx"));
	EXPECT_EQ(-1, romanConverter((char*)"DIKE"));
	EXPECT_EQ(-1, romanConverter((char*)"XXS"));
	EXPECT_EQ(-1, romanConverter((char*)"UTY"));
	EXPECT_EQ(-1, romanConverter((char*)"DIf"));
	EXPECT_EQ(-1, romanConverter((char*)"MMIi"));
}

//Teste para números inválidos
TEST(RomanConverterTest, NUMEROINVALIDO){
	EXPECT_EQ(-1, romanConverter((char*)"VV"));
	EXPECT_EQ(-1, romanConverter((char*)"LL"));
	EXPECT_EQ(-1, romanConverter((char*)"DD"));
	EXPECT_EQ(-1, romanConverter((char*)"IIII"));
	EXPECT_EQ(-1, romanConverter((char*)"XXXX"));
	EXPECT_EQ(-1, romanConverter((char*)"CCCC"));
	EXPECT_EQ(-1, romanConverter((char*)"MMMM"));
}

//Teste para tipos básicos - 1, 5, 10, 50, 100, 500, 1000.
TEST(RomanConverterTest, TIPO1){
	EXPECT_EQ(1, romanConverter((char*)"I"));
	EXPECT_EQ(5, romanConverter((char*)"V"));
	EXPECT_EQ(10, romanConverter((char*)"X"));
	EXPECT_EQ(50, romanConverter((char*)"L"));
	EXPECT_EQ(100, romanConverter((char*)"C"));
	EXPECT_EQ(500, romanConverter((char*)"D"));
	EXPECT_EQ(1000, romanConverter((char*)"M"));
}

//Teste para tipos que precisam de soma, quando o caractere posterior é menor que o atual.
TEST(RomanConverterTest, TIPO2){
	EXPECT_EQ(6, romanConverter((char*)"VI"));
	EXPECT_EQ(13, romanConverter((char*)"XIII"));
	EXPECT_EQ(355, romanConverter((char*)"CCCLV"));
	EXPECT_EQ(523, romanConverter((char*)"DXXIII"));
	EXPECT_EQ(808, romanConverter((char*)"DCCCVIII"));
	EXPECT_EQ(1130, romanConverter((char*)"MCXXX"));
	EXPECT_EQ(2050, romanConverter((char*)"MML"));	
}

//Teste para tipos que precisam de subtração, quando o caractere posterior é maior que o atual.
TEST(RomanConverterTest, TIPO3){
	EXPECT_EQ(4, romanConverter((char*)"IV"));
	EXPECT_EQ(49, romanConverter((char*)"XLIX"));
	EXPECT_EQ(434, romanConverter((char*)"CDXXXIV"));
	EXPECT_EQ(659, romanConverter((char*)"DCLIX"));
	EXPECT_EQ(1474, romanConverter((char*)"MCDLXXIV"));
	EXPECT_EQ(1511, romanConverter((char*)"MDXI"));
	EXPECT_EQ(1760, romanConverter((char*)"MDCCLX"));	
}


int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}