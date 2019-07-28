#ifndef MULT_H
#define MULT_H


#include "base.hpp"

#include <iostream>
#include <string>

using namespace std;

class Mult:public Base {
   public:
      Mult(Base* x, Base* y) {
          this->x = x;
          this->y = y;
      }
      double evaluate();
      string stringify();

   private:
      Base* x;
      Base* y;
      double data;
};

double Mult::evaluate() {
   data = x->evaluate() * y->evaluate();
   return data;
}

string Mult::stringify() {
   return x->stringify() + " * " + y->stringify();
}

#endif
