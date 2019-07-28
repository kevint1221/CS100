#ifndef ADD_H
#define ADD_H
#include "base.hpp"
#include <iostream>
#include <string>

using namespace std;

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
   return x->stringify() +  " + " + y->stringify();
}

#endif
