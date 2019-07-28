#ifndef __UNARY_ITERATOR_H__
#define __UNARY_ITERATOR_H__
#include "iterator.hpp"
/*
    will be used to iterate over expression tree classes with one child. 
    This means it's first will initialize to the only child, 
    and its next will cycle from the only child to nothing.
 */
class UnaryIterator : public Iterator{
    //Base* self_ptr;
    private:
       Base* node;
    public:
        UnaryIterator(Base* node) : Iterator(node) {
            
        }

        //if error, write constructor that initializes node with nullptr, and call parent constructor;
        /* Sets up the iterator to start at the beginning of traversal */
        void first() {
           node = self_ptr->get_left();
        }
        
        /* Move onto the next element */
        void next(){
              node = nullptr;
        }

        /* Returns if you have finished iterating through all elements */
        bool is_done(){
            return (node == nullptr);
        }

        /* Return the element the iterator is currently at */
        Base* current(){
            return node;
        }
};
#endif