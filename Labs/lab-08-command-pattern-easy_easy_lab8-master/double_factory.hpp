 
//in this file we are going to create a factory that set desired leaf to output double
//1. inherit from base_factory
//2. set two leaf which output double using double method ( this is already set in rand or op)

#ifndef __DOUBLE_FACTORY__
#define __DOUBLE_FACTORY__

#include "base.hpp"
#include "base_factory.hpp"

class DoubleFactory : public BaseFactory
{
    public: 
        DoubleFactory(){}
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

