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
#include "addCommand.hpp"
#include "powCommand.hpp"
#include "subCommand.hpp"
#include "multCommand.hpp"
#include "menu.hpp"
#include "divCommand.hpp"
#include "initialCommand.hpp"
#include <string>

using namespace std;


char* ConvertStringToCharArray(string s) {
        int len = s.length();
        char* res = new char(len + 1);
        strcpy(res,s.c_str());
        return res;
}


TEST(DoubleTest, AddTest)
{
    double input1 = 3.0;
    double input2 = 5.0;
    double result = 8.0;
    Op* temp2 = new Op(input2);
    Op* temp = new Op(input1);
    Command* command = new InitialCommand(temp);
    Command* command2 = new AddCommand(command, temp2);
    EXPECT_EQ(result,command2->execute()); 
}  

TEST(ScientificTest, AddTest)
{
    Menu* menu = new Menu();

    double input1 = 3.0;
    double input2 = 5.0;
    double result = 8.0;
    Op* temp2 = new Op(input2);
    Op* temp = new Op(input1);
    Command* command = new InitialCommand(temp);
    menu->add_command(command);
    cout << "menu strigify is" <<menu->stringify() <<endl;
    Command* command2 = new AddCommand(command, temp2);
    EXPECT_EQ(result,command2->execute()); 
}  


TEST(CommandTest, SubTest)
{
    double input1 = 8.0;
    double input2 = 2.0;
    double result = 6.0;
    Op* temp = new Op(input1);
    Op* temp2 = new Op(input2);
    Command* command = new InitialCommand(temp);
    Command* command2 = new SubCommand(command, temp2);
    EXPECT_EQ(result,command2->execute()); 
}  

TEST(CommandTest, MultTest)
{
    double input1 = 8.0;
    double input2 = 2.0;
    double result = 16.0;
    Op* temp = new Op(input1);
    Op* temp2 = new Op(input2);
    Command* command = new InitialCommand(temp);
    Command* command2 = new MultCommand(command, temp2);
    EXPECT_EQ(result,command2->execute()); 
}  

TEST(CommandTest, DivTest)
{
    double input1 = 8.0;
    double input2 = 2.0;
    double result = 4.0;
    Op* temp = new Op(input1);
    Op* temp2 = new Op(input2);
    Command* command = new InitialCommand(temp);
    Command* command2 = new DivCommand(command, temp2);
    EXPECT_EQ(result,command2->execute()); 
}  

TEST(CommandTest, PowTest)
{
    double input1 = 8.0;
    double input2 = 2.0;
    double result = 64.0;
    Op* temp = new Op(input1);
    Op* temp2 = new Op(input2);
    Command* command = new InitialCommand(temp);
    Command* command2 = new PowCommand(command, temp2);
    EXPECT_EQ(result,command2->execute()); 
}  

TEST(FactoryTest, precisionTest)
{
    double num = 3.1415926534;
    //create factory
    BaseFactory* v1 = new PrecisionFactory();
    Op* v2 = v1->createOp(num);
    std::ostringstream streamObj;
    //Converting using std::to_string
    streamObj << fixed << setprecision(3) << num;
    //Add double to stream
    // Get string from output string stream 
    std::string strObj = streamObj.str();    

    EXPECT_EQ(strObj,v2->stringify()); 
    
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


TEST(FactoryTest, scientificTest)
{
    double num = 88.89;
    //create factory
    BaseFactory* v1 = new ScientificFactory();
    Op* v2 = v1->createOp(num);
    
    EXPECT_EQ("8.9e+01",v2->stringify()); 
    
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
