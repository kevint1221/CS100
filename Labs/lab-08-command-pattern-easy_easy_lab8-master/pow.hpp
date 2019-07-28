#ifndef POW_H
#define POW_H
#include "base.hpp"
#include <math.h>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;


class Pow: public Base {
   public:
      Pow(Base* x, Base* y) {
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

double Pow::evaluate() {
 double data_one = x->evaluate();
 double data_two = y->evaluate();

 data = pow(data_one, data_two);

return data;
}

string Pow::stringify() {
   return x->stringify() + " ** " + y->stringify();
}


#endif
