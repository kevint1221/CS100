#ifndef SUB_H
#define SUB_H
#include "mocks.hpp"
#include "base.hpp"

class Sub:public Base {
   public:
      Sub(Base* x, Base* y) {
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

double Sub::evaluate() {
   data = x->evaluate() - y->evaluate();
   return data;
}

string Sub::stringify() {
   string operand1, operand2;
   operand1 = to_string(x->evaluate());
   operand2 = to_string(y->evaluate());
   return operand1 + " - " + operand2;
}

#endif
