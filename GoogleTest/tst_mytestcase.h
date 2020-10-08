#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "../Server/widget.cpp"

using namespace testing;

TEST(MyTestCase, MySetCase) {

    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));

}

TEST(MyTestCase, MySetCase1) {

    Graph g;
    int res = g.ProbarTest(10,20);

    ASSERT_EQ(res, 30);



}
