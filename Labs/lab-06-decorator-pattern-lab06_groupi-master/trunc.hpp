#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "base.hpp"
#include "Op.h"
#include "Rand.h"
using namespace std;



class Trunc : public Base
{
    public:
        Base * operand1;

        double evaluate()
        {
            return operand->evaluate();
        }
        string stringify()
        {
            return to_string(operand1->evaluate());
        }


};

#endif
