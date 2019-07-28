#ifndef OP_H
#define OP_H

#include "base.hpp"
#include "nullIterator.hpp"

using namespace std;

class Op: public Base {
   private:
      double data;
   public:
      Op() { }
      Op(double data) {
         this->data = data;
      }

      virtual double evaluate(){
        return data;
         
      }
      virtual string stringify(){
        return to_string(data);
      }
      Base* get_left(){ return nullptr; } 
      Base* get_right(){ return nullptr; }
      Iterator* create_iterator(){ 
         return new NullIterator(this);
      }
      
};



#endif
