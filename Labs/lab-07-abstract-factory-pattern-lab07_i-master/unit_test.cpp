#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include <math.h>
#include <string>
#include "rand.hpp"
#include "op.hpp"
#include <iomanip>
#include "base.hpp"
#include "base_factory.hpp"
#include "double_factory.hpp"
#include "scientific_factory.hpp"
#include "scientific_op.hpp"
#include "scientific_rand.hpp"
#include "precision_factory.hpp"
#include "precision_op.hpp"
#include "precision_rand.hpp"
#include <string>

using namespace std;


char* ConvertStringToCharArray(string s) {
        int len = s.length();
        char* res = new char(len + 1);
        strcpy(res,s.c_str());
        return res;
}


TEST(FactoryTest, precisionTest)
{
    double num = 3.1415926534;
    //create factory
    BaseFactory* v1 = new PrecisionFactory();
    Op* v2 = v1->createOp(num);
    std::ostringstream streamObj;
    streamObj << std::setprecision(4);
    //Converting using std::to_string
    streamObj << std::fixed;
    //Add double to stream
    streamObj << num;
    // Get string from output string stream 
    std::string strObj = streamObj.str();    
    string text = to_string(num);
    cout << text << endl;

    EXPECT_EQ(text,v2->stringify()); 
    
}  

TEST(FactoryTest, doubleTest)
{
    double num = 3.1415926534;
    //create factory
    BaseFactory* v1 = new DoubleFactory();
    Op* v2 = v1->createOp(num);
    string text = to_string(num);
    EXPECT_EQ(text,v2->stringify()); 
    
}  

TEST(FactoryTest, ScientificTest)
{
    double num = 3.1415926534;
    std::ostringstream streamObj;
    //Add double to stream
    streamObj << num;
    //// Get string from output string stream
    std::string text  = streamObj.str();

    //create factory
    BaseFactory* v1 = new ScientificFactory();
    Op* v2 = v1->createOp(num);

    EXPECT_EQ(text,v2->stringify()); 
    
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
