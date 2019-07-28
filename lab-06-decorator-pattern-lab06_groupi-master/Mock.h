#ifndef __MOCK_H__
#define __MOCK_H__

#include"base.hpp"

class SevenMock: public Base {
    public:
        SevenMock() { };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};

class EightMock: public Base {
    public:
        EightMock() { };

        virtual double evaluate() { return 8.5; }
        virtual string stringify() { return "8.5"; }
};

class SixMock: public Base {
    public:
        SixMock() { };

        virtual double evaluate() { return 6.5; }
        virtual string stringify() { return "6.5"; }
};
#endif