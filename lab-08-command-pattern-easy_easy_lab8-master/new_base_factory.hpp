#ifndef __NEW_BASE_FACTORY__
#define __NEW_BASE_FACTORY__
#include "base.hpp"
#include "base_factory.hpp"
#include "op.hpp"
#include "rand.hpp"

//in this file we are going to create a factory that set desired leaf to set output precision
//1. inherit from base_factory
//2. set two leaf which sets precision for output using precision class method 

class NewBaseFactory : public BaseFactory
{

    public: 
        NewBaseFactory(){}
        Op* createOp(double value)
        {
            return new Op(value);
        }
        Rand* createRand()
        {
            return new Rand();
        }
};


#endif