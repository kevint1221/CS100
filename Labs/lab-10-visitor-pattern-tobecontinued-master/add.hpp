#ifndef ADD_H
#define ADD_H
#include "base.hpp"
#include "binaryIterator.hpp"
#include <iostream>
#include <string>
#include "visitor.hpp"

using namespace std;

class Add:public Base {
   public:
      Add(Base* x, Base* y) {
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
         c->visit_add();
      }

   private:
      Base* x;
      Base* y;
};

double Add::evaluate() {
   return x->evaluate() + y->evaluate();  
}

string Add::stringify() {
   return x->stringify() +  " + " + y->stringify();
}

#endif
