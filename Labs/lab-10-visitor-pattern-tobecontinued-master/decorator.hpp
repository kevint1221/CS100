#ifndef _DECORATOR_HPP__
#define _DECORATOR_HPP__
#include "base.hpp"
#include "unaryIterator.hpp"
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
        Base* get_left(){ return Node; }
        Base* get_right(){ return nullptr; }
        Iterator* create_iterator(){ 
        return new UnaryIterator(this);
        }
        void accept(CountVisitor* c){}
};
#endif
