#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "visitor.hpp"
using namespace std;


class Paren : public Base
{
    public:

        Paren(Base * base)
        {
            operand1 = base; 
        }
        
        double evaluate()
        {
            return operand1->evaluate();
        }
        string stringify()
        {
            string temp;
            temp.append("(");
            temp.append(operand1->stringify());
            temp.append(")");
            return temp;    
        }
        void accept(CountVisitor* c){
         c->visit_paren();
      }

    protected:
        
        Base * operand1;

};

#endif
