#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include <math.h>
#include <string>
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "sub.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "nullIterator.hpp"
#include "iterator.hpp"
#include "base.hpp"
#include "unaryIterator.hpp"
#include "binaryIterator.hpp"
#include "preorderIterator.hpp"
#include "visitor.hpp"
using namespace std;

TEST(add, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_add();
    EXPECT_EQ(v->add_count(),1);
}

TEST(add, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->add_count(),0);
}

TEST(div, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_div();
    EXPECT_EQ(v->div_count(),1);
}

TEST(div, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->div_count(),0);
}

TEST(mult, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_mult();
    EXPECT_EQ(v->mult_count(),1);
}

TEST(mult, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->mult_count(),0);
}

TEST(sub, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_sub();
    EXPECT_EQ(v->sub_count(),1);
}

TEST(sub, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->sub_count(),0);
}

TEST(op, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_op();
    EXPECT_EQ(v->op_count(),1);
}

TEST(op, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->op_count(),0);
}

TEST(pow, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_pow();
    EXPECT_EQ(v->pow_count(),1);
}

TEST(pow, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->pow_count(),0);
}

TEST(rand, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_rand();
    EXPECT_EQ(v->rand_count(),1);
}

TEST(rand, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->rand_count(),0);
}

TEST(ceil, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_ceil();
    EXPECT_EQ(v->ceil_count(),1);
}

TEST(ceil, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->ceil_count(),0);
}

TEST(floor, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_floor();
    EXPECT_EQ(v->floor_count(),1);
}

TEST(floor, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->floor_count(),0);
}

TEST(abs, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_abs();
    EXPECT_EQ(v->abs_count(),1);
}

TEST(abs, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->abs_count(),0);
}

TEST(trunc, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_trunc();
    EXPECT_EQ(v->trunc_count(),1);
}

TEST(trunc, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->trunc_count(),0);
}

TEST(paren, visit){
    CountVisitor* v = new CountVisitor();
    v->visit_paren();
    EXPECT_EQ(v->paren_count(),1);
}

TEST(paren, count){
    CountVisitor* v = new CountVisitor();
    EXPECT_EQ(v->paren_count(),0);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}