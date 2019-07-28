#ifndef MOCK_H
#define MOCK_H

#include "base.hpp"
#include <string>

using namespace std;

class SevenOpMock: public Base {
    public:
        SevenOpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};



class SevenOpMock1: public Base {
    public:
        SevenOpMock1() { };

        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; }
};



class SevenOpMock2: public Base {
    public:
        SevenOpMock2() { };

        virtual double evaluate() { return 9.1; }
        virtual string stringify() { return "9.1"; }
};


#endif

