#ifndef MULT_H
#define MULT_H


#include "base.hpp"

#include <iostream>
#include <string>
#include "binaryIterator.hpp"
#include "visitor.hpp"

using namespace std;

class Mult:public Base {
   public:
      Mult(Base* x, Base* y) {
          this->x = x;
          this->y = y;
      }
      double evaluate();
      string stringify();
      Base* get_left() { return x; }
      Base* get_right() { return y; }
      Iterator* create_iterator(){ 
         return new BinaryIterator(this);
      }
      void accept(CountVisitor* c){
         c->visit_mult();
      }
   private:
      Base* x;
      Base* y;
};

double Mult::evaluate() {
   return x->evaluate() * y->evaluate();
}

string Mult::stringify() {
   return x->stringify() + " * " + y->stringify();
}

#endif
