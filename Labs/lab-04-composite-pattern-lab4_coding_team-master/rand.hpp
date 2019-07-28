#ifndef RAND_H
#define RAND_H

#include "base.hpp"

#include "mocks.hpp"
class Rand: public Base {
   public:
      Rand() {
        this->data = getRandDouble();
      }
      double getRandDouble();
      double evaluate() ;
      string stringify();

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
