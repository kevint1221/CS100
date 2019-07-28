#include <iostream>
#include "gtest/gtest.h"
#include "base.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "add.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "sub.hpp"
using namespace std;

/*
TEST(Multiply, multiplication_test) {
    SevenOpMock* v1 = new SevenOpMock(); 
    sevenOpMock2* v2 = new SevenOpMock2();
    Mult* result = new Mult(v1,v2);
    EXPECT_EQ(68.25, result->evaluate());
}
*/


TEST(Multiply, multiplication_test) {
    Base* v1 = new Op(7.0);
    Base* v2 = new Op(3.0); 
    Base* result = new Mult(v1,v2);
    EXPECT_EQ(21.0, result->evaluate());
}


TEST(Addition, Addition_test) {
    Base* v1 = new Op(7.0);
    Base* v2 = new Op(3.0);
    Base* result = new Add(v1,v2);
    EXPECT_EQ(10.0, result->evaluate());
}

TEST(Power, Power_test) {
    Base* v1 = new Op(2.0);
    Base* v2 = new Op(2.0);
    Base* result = new Pow(v1,v2);
    EXPECT_EQ(4.0, result->evaluate());
}

TEST(Division, Division_test) {
    Base* v1 = new Op(2.0);
    Base* v2 = new Op(2.0);
    Base* result = new Div(v1,v2);
    EXPECT_EQ(1.0, result->evaluate());
}

TEST(Subtract, Subtract_test) {
    Base* v1 = new Op(5.0);
    Base* v2 = new Op(3.0);
    Base* result = new Sub(v1,v2);
    EXPECT_EQ(2.0, result->evaluate());
}


TEST(Random, Random_Add) {
    //Op* v1 = new Op(5.0);
    //Op* v2 = new Op(3.0);
    //SevenOpMock* v1 = new SevenOpMock();
    //SevenOpMock* v2 = new SevenOpMock();
    
    SevenOpMock* v1 = new SevenOpMock;
    SevenOpMock1* v2 = new SevenOpMock1;
    
    Add* result = new Add(v1,v2);
   // double data_1 = result_1->evaluate();
   // Rand* result_2 = new Rand();
    //double data_2 = result_2->evaluate(); 
    //EXPECT_TRUE(data_1 != data_2); 
    EXPECT_EQ(7.5, result->evaluate()); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
