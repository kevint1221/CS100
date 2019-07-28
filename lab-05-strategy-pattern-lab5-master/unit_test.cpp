#include "gtest/gtest.h"
#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Rand.h"
#include "Op.h"
#include "Pow.h"
#include "Div.h"
#include "Mult.h"
#include "Mock.h"
#include <math.h>
#include "VectorContainer.h"
#include "ListContainer.h"
#include "sort.hpp"
#include "bubble_sort.hpp"
#include "selection_sort.hpp"


using namespace std;


char* ConvertStringToCharArray(string s) {
        int len = s.length();
        char* res = new char(len + 1);
        strcpy(res,s.c_str());
        return res;
}

TEST(VectorContainerTestSet, AddElementTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(ListContainerTestSet, AddElementTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SwapTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* nine = new Op(9);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(nine);
    test_container->swap(0,1);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(0)->evaluate(), 9);
    EXPECT_EQ(test_container->at(1)->evaluate(), 7);
}
TEST(ListContainerTestSet, SwapTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* nine = new Op(9);
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(nine);
    test_container->swap(0,1);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(0)->evaluate(), 9);
    EXPECT_EQ(test_container->at(1)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SelectionSortTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* five = new Op(5);
    Op* six = new Op(6);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(five);
    test_container->add_element(six);
    // TODO:  需要先set sort 的function
    //test_container->set_sort_function(SotrObject)  
    test_container->set_sort_function(new Selection_sort());
    test_container->sort();

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 5);
    EXPECT_EQ(test_container->at(1)->evaluate(), 6);
    EXPECT_EQ(test_container->at(2)->evaluate(), 7);
}
TEST(VectorContainerTestSet, BubbleSortTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* five = new Op(5);
    Op* six = new Op(6);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(five);
    test_container->add_element(six);
    // TODO:  需要先set sort 的function
    //test_container->set_sort_function(SotrObject)  
    test_container->set_sort_function(new Bubble_sort());
    test_container->sort();

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 5);
    EXPECT_EQ(test_container->at(1)->evaluate(), 6);
    EXPECT_EQ(test_container->at(2)->evaluate(), 7);
}
TEST(ListContainerTestSet, SelectionSortTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* five = new Op(5);
    Op* six = new Op(6);
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(five);
    test_container->add_element(six);
    // TODO:  需要先set sort 的function
    //test_container->set_sort_function(SotrObject)
    test_container->set_sort_function(new Selection_sort());
    
    test_container->sort();


    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 5);
    EXPECT_EQ(test_container->at(1)->evaluate(), 6);
    EXPECT_EQ(test_container->at(2)->evaluate(), 7);
}
TEST(ListContainerTestSet, BubbleSortTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* five = new Op(5);
    Op* six = new Op(6);
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(five);
    test_container->add_element(six);
    // TODO:  需要先set sort 的function
    //test_container->set_sort_function(SotrObject)
    test_container->set_sort_function(new Bubble_sort());
    
    test_container->sort();


    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 5);
    EXPECT_EQ(test_container->at(1)->evaluate(), 6);
    EXPECT_EQ(test_container->at(2)->evaluate(), 7);
}


TEST(AddTest, SixAddSeven) {
        SixMock* six = new SixMock();
        SevenMock* seven = new SevenMock();
        Add* add = new Add();
        add->operand1 = six;
        add->operand2 = seven;
        EXPECT_EQ(14, add->evaluate());
        EXPECT_STREQ("6.5+7.5",ConvertStringToCharArray(add->stringify()));
}

TEST(SubTest, SevenMinusSix) {
        SixMock* six = new SixMock();
        SevenMock* seven = new SevenMock();
        Sub* sub = new Sub();
        sub->operand1 = seven;
        sub->operand2 = six;
        EXPECT_EQ(1, sub->evaluate());
        EXPECT_STREQ("7.5-6.5",ConvertStringToCharArray(sub->stringify()));
}
TEST(MultTest, SixMultEight) {
        SixMock* six = new SixMock();
        EightMock* eight = new EightMock();
        Mult* mult = new Mult();
        mult->operand1 = six;
        mult->operand2 = eight;
        EXPECT_EQ(55.25, mult->evaluate());
        EXPECT_STREQ("6.5*8.5",ConvertStringToCharArray(mult->stringify()));
}
TEST(SubTest, SixMinusEight) {
        SixMock* six = new SixMock();
        EightMock* eight = new EightMock();
        Sub* sub = new Sub();
        sub->operand1 = six;
        sub->operand2 = eight;
        EXPECT_EQ(-2, sub->evaluate());
        EXPECT_STREQ("6.5-8.5",ConvertStringToCharArray(sub->stringify()));
}

TEST(DivTest, EightDivSix) {
        SixMock* six = new SixMock();
        EightMock* eight = new EightMock();
        Div* div = new Div();
        div->operand1 = eight;
        div->operand2 = six;
        double a = 8.5/6.5;
        EXPECT_EQ(a, div->evaluate());
        EXPECT_STREQ("8.5/6.5",ConvertStringToCharArray(div->stringify()));
}

TEST(PowTest, EightPowSix) {
        SixMock* six = new SixMock();
        EightMock* eight = new EightMock();
        Pow* temp = new Pow();
        temp->operand1 = eight;
        temp->operand2 = six;
        double a = pow(8.5, 6.5);
        EXPECT_EQ(a, temp->evaluate());
        EXPECT_STREQ("8.5**6.5",ConvertStringToCharArray(temp->stringify()));
}


TEST(OpTest, EightOp) {
        Op* temp = new Op(8);
        double a = 8;
        EXPECT_EQ(8, temp->evaluate());
        EXPECT_STREQ("8.000000",ConvertStringToCharArray(temp->stringify()));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
