#ifndef __FLOOR_H__
#define __FLOOR_H__
#include <math.h>
#include "decorator.hpp"

class Floor : public Decorator{
    public:
        Floor(Base* node) {
            this->Node = node;
        }
        double evaluate(){
            return floor(Node->evaluate());
        }
};

#endif