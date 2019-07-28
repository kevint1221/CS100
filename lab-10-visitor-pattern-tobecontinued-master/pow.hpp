#ifndef POW_H
#define POW_H
#include "base.hpp"
#include <math.h>
#include <cmath>
#include <iostream>
#include <string>
#include "binaryIterator.hpp"
#include "visitor.hpp"

using namespace std;


class Pow: public Base {
   public:
      Pow(Base* x, Base* y) {
         this->x = x;
         this->y = y;
      }
      double evaluate();
      string stringify();
      Base* get_left(){ return x; }
      Base* get_right(){ return y; }
      Iterator* create_iterator(){ 
         return new BinaryIterator(this);
      }
      void accept(CountVisitor* c){
         c->visit_pow();
      }
   private:
      Base* x;
      Base* y;
};

double Pow::evaluate() {
   return pow(x->evaluate(), y->evaluate());
}

string Pow::stringify() {
   return x->stringify() + " ** " + y->stringify();
}


#endif
