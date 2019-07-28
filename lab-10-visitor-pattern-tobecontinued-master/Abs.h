#ifndef __ABS_H__
#define __ABS_H__
#include <math.h>
#include "decorator.hpp"
#include "visitor.hpp"

class Abs : public Decorator{
    public:
        Abs(Base* node) {
            this->Node = node;
        }
        double evaluate(){
            return abs(Node->evaluate());
        }
        void accept(CountVisitor* c){
         c->visit_abs();
      }
};

#endif