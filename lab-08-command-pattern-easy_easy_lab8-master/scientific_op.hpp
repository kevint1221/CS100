#ifndef __SCIENTIFIC_OP__
#define __SCIENTIFIC_OP__

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include "op.hpp"
#include "base.hpp"
using namespace std;

//in this file, we are going to set  sciencetific for op class which inherit from base
//1. inherit from op
//2. override the stringify() of op to sicencetific value


class SciOp : public Op 
{
    private:
        Base* v1;
    public:
        SciOp(Base* base)
        {
            v1 =  base;
        }
        double evaluate()
        {
            return v1->evaluate();
        }
        string stringify()
        {
            double dat = v1->evaluate();
            std::ostringstream output;
            //stored data in to stringstream
            output << std::fixed << std::setprecision(1) << std::scientific << dat;
            std::string convert = output.str();
            //cout << convert << endl;
             return convert;

        }


};
#endif
