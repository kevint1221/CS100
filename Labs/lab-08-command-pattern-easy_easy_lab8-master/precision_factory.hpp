#ifndef __PRECISION_FACTORY__
#define __PRECISION_FACTORY__
#include "base.hpp"
#include "base_factory.hpp"
#include "precision_op.hpp"
#include "precision_rand.hpp"

//in this file we are going to create a factory that set desired leaf to set output precision
//1. inherit from base_factory
//2. set two leaf which sets precision for output using precision class method 

class PrecisionFactory : public BaseFactory
{

    public: 
        PrecisionFactory(){}
        Op* createOp(double value)
        {
            return new PrecisionOp(value);
        }
        Rand* createRand()
        {
            return new PrecisionRand();
        }
};


#endif