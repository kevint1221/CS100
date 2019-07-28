#ifndef SUB_H
#define SUB_H

#include "base.hpp"
#include <iostream>
#include <string>

using namespace std;

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
   return x->stringify() + " - " + y->stringify();
}

#endif
