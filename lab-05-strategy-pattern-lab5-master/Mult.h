#ifndef __MULT_H__
#define __MULT_H__
#include <iostream>
#include <string>
#include <stdlib.h> 
#include "base.hpp"
#include "Op.h"
#include "Rand.h"
using namespace std;

class Mult: public Base {
    public:
        Base* operand1;
        Base* operand2;
        Mult(){
        }
        double evaluate(){
            return operand1->evaluate() * operand2->evaluate();
        }
        string stringify(){
            return operand1->stringify().append("*").append(operand2->stringify());
        }
};

#endif