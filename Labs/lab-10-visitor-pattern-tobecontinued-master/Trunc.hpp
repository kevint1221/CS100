#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "visitor.hpp"
using namespace std;



class Trunc : public Base
{
    public:

        Trunc(Base * base)
        {
            operand1 = base; 
        }
        
        double evaluate()
        {
            return operand1->evaluate();
        }
        string stringify()
        {
            return to_string(operand1->evaluate());
        }
        void accept(CountVisitor* c){
         c->visit_trunc();
      }

    protected:
        
        Base * operand1;

};

#endif
