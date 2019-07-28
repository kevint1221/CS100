#ifndef __CEIL_H__
#define __CEIL_H__
#include <math.h>
#include "decorator.hpp"
#include "visitor.hpp"

class Ceil : public Decorator{
    public:
        Ceil(Base* node) {
            this->Node = node;
        }
        double evaluate(){
            return ceil(Node->evaluate());
        }
        void accept(CountVisitor* c){
         c->visit_ceil();
      }
};

#endif
