#ifndef __OP_H__
#define __OP_H__
#include <iostream>
#include <string>
#include "base.hpp"
using namespace std;
class Op: public Base {
    public:
        double value;
        Op(){
            value = 0;
        }
        Op(double temp){
            value = temp;
        }
        double evaluate(){
            return value;
        }
        string stringify(){
            return to_string(value);
        }
};
#endif
