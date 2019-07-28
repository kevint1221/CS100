#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include <math.h>
#include <string>
#include "rand.hpp"
#include "op.hpp"
#include "base.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "decorator.hpp"
using namespace std;

TEST(BinaryTest, first)
{
    Op* op5 = new Op(5);
    Op* op6 = new Op(6);
    Base* add = new Add(op5,op6);
    Iterator* itr = add->create_iterator();
    itr->first();
    EXPECT_EQ(itr->current(), add->get_left());
}

TEST(BinaryTest, next)
{
    Op* op5 = new Op(5);
    Op* op6 = new Op(6);
    Base* add = new Add(op5,op6);
    Iterator* itr = add->create_iterator();
    itr->first();
    itr->next();
    EXPECT_EQ(itr->current(), add->get_right());
}  

TEST(BinaryTest, isdone)
{
    Op* op5 = new Op(5);
    Op* op6 = new Op(6);
    Base* add = new Add(op5,op6);
    Iterator* itr = add->create_iterator();
    itr->first();
    itr->next();
    itr->next();
    EXPECT_EQ(itr->is_done(),true);
}  

TEST(BinaryTest, current)
{
    Op* op5 = new Op(5);
    Op* op6 = new Op(6);
    Base* add = new Add(op5,op6);
    Iterator* itr = add->create_iterator();
    itr->first();
    itr->next();
    itr->next();
    EXPECT_EQ(itr->current(),nullptr);
}  

TEST(Nulltest, isdone)
{
    Op* op5 = new Op(5);
    Iterator* itr = op5->create_iterator();
    itr->first();
    EXPECT_EQ(itr->is_done(),true);
}  

TEST(NullTest, current)
{
    Op* op5 = new Op(5);
    Iterator* itr = op5->create_iterator();
    itr->first();
    EXPECT_EQ(itr->current(),nullptr);
}  

TEST(UnaryTest, first)
{
    Op* op5 = new Op(5);
    Decorator* dec = new Decorator(op5);
    Iterator* itr = dec->create_iterator();
    itr->first();
    EXPECT_EQ(itr->current(), dec->get_left());
}  

TEST(UnaryTest, next)
{
    Op* op5 = new Op(5);
    Decorator* dec = new Decorator(op5);
    Iterator* itr = dec->create_iterator();
    itr->first();
    itr->next();
    EXPECT_EQ(itr->current(), nullptr);
}

TEST(UnaryTest, isdone)
{
    Op* op5 = new Op(5);
    Decorator* dec = new Decorator(op5);
    Iterator* itr = dec->create_iterator();
    itr->first();
    itr->next();
    EXPECT_EQ(itr->is_done(), true);
}
  
TEST(UnaryTest, current)
{
    Op* op5 = new Op(5);
    Decorator* dec = new Decorator(op5);
    Iterator* itr = dec->create_iterator();
    itr->first();
    itr->next();
    EXPECT_EQ(itr->current(), nullptr);
}  

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}