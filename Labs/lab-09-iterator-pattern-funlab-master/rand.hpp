#ifndef RAND_H
#define RAND_H

#include "base.hpp"
#include <string>
#include "nullIterator.hpp"

using namespace std;

class Rand: public Base {
   public:
      Rand() {
        this->data = getRandDouble();
      }
      double getRandDouble();
      double evaluate() ;
      string stringify();
      Base* get_left(){ return nullptr; }
      Base* get_right(){ return nullptr; }
      Iterator* create_iterator(){ 
         return new NullIterator(this);
      }
   private:
      double data;
};

double Rand::getRandDouble() {
   srand (time(NULL));
   double randNum = rand() % 100;

   return randNum;
}

double Rand::evaluate() {
   return data;
}

string Rand::stringify() {
   return to_string(data);
}

#endif
