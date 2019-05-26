#include "gtest/gtest.h"
#include "../math.h"

TEST(SampleTest, Add){
    EXPECT_EQ(5, add(3, 2));
};

TEST(SampleTest, Sub){
    EXPECT_EQ(3, sub(10, 8));
};


int main(int argc,char**argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}