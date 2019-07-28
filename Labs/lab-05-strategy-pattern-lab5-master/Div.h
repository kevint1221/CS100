#ifndef __DIV_H__
#define __DIV_H__

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "base.hpp"
#include "Op.h"
#include "Rand.h"
using namespace std;

class Div: public Base {
    public:
        Base* operand1;
        Base* operand2;
        Div(){
        }
        double evaluate(){
            if (operand2->evaluate() == 0) {
                cout<< "divider can not be 0 " << endl;
                return -1;
            }
            return operand1->evaluate() / operand2->evaluate();
        }
        string stringify(){
            return operand1->stringify().append("/").append(operand2->stringify());
        }
};

#endif