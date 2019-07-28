#ifndef DIV_H
#define DIV_H

#include "mocks.hpp"
#include "base.hpp"

using namespace std;

class Div:public Base {
   public:
      Div(Base* x, Base* y) {
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

double Div::evaluate() {
   if (y == 0) {
      cout << "Cannot divide by zero" << endl;
      return 0;
   }
   data = x->evaluate() / y->evaluate();
   return data;
}

string Div::stringify() {
   string operand1, operand2;
   operand1 = to_string(x->evaluate());
   operand2 = to_string(y->evaluate());
   return operand1 + " / " + operand2;
}


#endif
