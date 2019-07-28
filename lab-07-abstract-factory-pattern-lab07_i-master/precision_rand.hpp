#ifndef __PRECISION_RAND__
#define __PRECISION_RAND__

#include <iostream>
#include <sstream>
#include "rand.hpp"
using namespace std;
//in this file, we are going to set precision for rand class which inherit from base
//1. inherit from rand
//2. override the stringify() of op to specific set of precision
class PrecisionRand : public Rand 
{
    private:
        Rand* numDigits;
    public:
        PrecisionRand()
        {
            numDigits = new Rand();
        }
        double evaluate()
        {
            return numDigits->evaluate();
        }
        
        string stringify()
        {
            double numData = numDigits->evaluate();
            ostringstream output;
            output << std::fixed;
            output << std::setprecision(5);
            //stored data in to stringstream
            output << numData;
            //revert number to string
            string convert = output.str();
            return convert;
        }


};
#endif
