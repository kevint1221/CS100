#ifndef DIV_H
#define DIV_H


#include "base.hpp"
#include <iostream>
#include <string>
#include "binaryIterator.hpp"
#include "visitor.hpp"

using namespace std;

class Div:public Base {
   public:
      Div(Base* x, Base* y) {
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
         c->visit_div();
      }
   private:
      Base* x;
      Base* y;
};

double Div::evaluate() {
   if (y == 0) {
      cout << "Cannot divide by zero" << endl;
      return 0;
   }
   return x->evaluate() / y->evaluate();
}

string Div::stringify() {
   return x->stringify() + " / " + y->stringify();
}


#endif
