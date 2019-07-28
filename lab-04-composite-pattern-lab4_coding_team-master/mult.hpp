#ifndef MULT_H
#define MULT_H

#include "mocks.hpp"
#include "base.hpp"

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
   string operand1, operand2;
   operand1 = to_string(x->evaluate());
   operand2 = to_string(y->evaluate());
   return operand1 + " * " + operand2;
}

#endif
