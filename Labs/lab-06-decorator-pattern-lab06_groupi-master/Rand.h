#ifndef __RAND_H__
#define __RAND_H__

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "base.hpp"
using namespace std;
class Rand: public Base {
    double value;
    Rand(){
        value = rand() % 100;
    }
    double evaluate(){
        return value;
    }
    string stringify(){
        return to_string(value);
    }
};

#endif