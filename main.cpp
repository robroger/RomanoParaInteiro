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



int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}