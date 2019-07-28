#ifndef ADD_H
#define ADD_H
#include "mocks.hpp"
#include "base.hpp"

class Add:public Base {
   public:
      Add(Base* x, Base* y) {
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

double Add::evaluate() {
   data = x->evaluate() + y->evaluate();
   return data;  
}

string Add::stringify() {
   string operand1, operand2;
   operand1 = to_string(x->evaluate());
   operand2 = to_string(y->evaluate());
   return operand1 +  " + " + operand2;
}

#endif
