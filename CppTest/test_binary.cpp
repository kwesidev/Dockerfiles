#include <gtest/gtest.h>
#include "binary.h"
TEST (BinaryTest,Test8) 
{

 EXPECT_EQ ("1000",Binary::Convert(8));

}

TEST(BinaryTest,Test1)
{
 
 EXPECT_EQ("1",Binary::Convert(1));

}


TEST(BinaryTest,Test128)
{
 
 EXPECT_EQ("10000000",Binary::Convert(128));

}
TEST(BinaryTest,Test48)
{

 EXPECT_EQ("110000",Binary::Convert(48));

}

TEST(BinaryTest,Test255)
{

 EXPECT_EQ("11111111",Binary::Convert(255));

}
int main(int argc,char **argv)
{

 ::testing::InitGoogleTest(&argc,argv);
 return RUN_ALL_TESTS();

}
