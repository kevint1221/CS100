#ifndef __SUB_H__
#define __SUB_H__
#include "base.hpp"

class Sub : public Base {
    public:
        Base* operand1;
        Base* operand2;
        double evaluate() {
            return operand1->evaluate() - operand2->evaluate();
        }
        string stringify() {
            string temp;
            temp = operand1->stringify();
            temp.append("-");
            temp.append(operand2->stringify());
            return temp;
        }
};
#endif