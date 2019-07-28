#ifndef SUB_H
#define SUB_H

#include "base.hpp"
#include <iostream>
#include <string>
#include "binaryIterator.hpp"
#include "visitor.hpp"

using namespace std;

class Sub:public Base {
   public:
      Sub(Base* x, Base* y) {
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
         c->visit_sub();
      }
   private:
      Base* x;
      Base* y;
};

double Sub::evaluate() {
   return x->evaluate() - y->evaluate();
}

string Sub::stringify() {
   return x->stringify() + " - " + y->stringify();
}

#endif
