#ifndef _DECORATOR_HPP__
#define _DECORATOR_HPP__
#include "base.hpp"
#include <math.h>
class Decorator : public Base {
    protected:
        Base* Node;
    public:
        Decorator(){ }
        Decorator(Base* node){ this->Node = node;}
        virtual double evaluate(){
 //           return Node->evaluate();
        }
        virtual string stringify(){
   //         return Node->stringify();
        }
};
#endif
