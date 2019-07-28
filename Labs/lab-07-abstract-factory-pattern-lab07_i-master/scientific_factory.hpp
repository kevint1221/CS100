#ifndef __SCIENTIFIC_FACTORY__
#define __SCIENTIFIC_FACTORY__

#include "base.hpp"
#include "base_factory.hpp"
#include "scientific_op.hpp"
#include "scientific_rand.hpp"

class ScientificFactory : public BaseFactory
{
    public: 
        ScientificFactory(){}
        Op* createOp(double value)
        {
            return new SciOp(value);
        }
        Rand* createRand()
        {
            return new SciRand();
        }
};




//in this file we are going to create a factory that set desired leaf to output scientific value
//1. inherit from base_factory
//2. set two leaf which output scientific value using scientific class 

#endif
