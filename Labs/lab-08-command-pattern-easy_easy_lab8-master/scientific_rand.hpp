//in this file, we are going to set  sciencetific for rand class which inherit from base
//1. inherit from op
//2. override the stringify() of rand to sicencetific value

#ifndef __SCIENTIFIC_RAND__
#define __SCIENTIFIC_RAND__

#include "base.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include "rand.hpp"
#include <iomanip>
using namespace std;

class SciRand : public Rand 
{
    private:
        Rand *v1;
    public:
        SciRand()
        {
            v1 = new Rand();
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
