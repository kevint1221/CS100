#ifndef OP_H
#define OP_H

#include "base.hpp"

using namespace std;

class Op: public Base {
   private:
      double data;
   public:
      Op(double data) {
         this->data = data;
      }

      virtual double evaluate(){
        return data;
         
      }
      virtual string stringify(){
        return to_string(data);
      }
      
};



#endif
