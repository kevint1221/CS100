#ifndef __PRECISION_OP__
#define __PRECISION_OP__

#include "base.hpp"
#include "op.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip> 
using namespace std;
//in this file, we are going to set precision for op class which inherit from base
//1. inherit from op
//2. override the stringify() of op to specific set of precision


class PrecisionOp : public Op {
    private:
        Op* numDigits;
    public:
        PrecisionOp(double num)
        {
            numDigits = new Op(num); 
        }
        double evaluate()
        {
            return numDigits->evaluate();
        }
        string stringify()
        {
            //TODO:figure out where to get number and where to do precision
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

