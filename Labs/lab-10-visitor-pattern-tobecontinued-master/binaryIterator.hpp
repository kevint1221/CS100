#ifndef __BINARY_ITERATOR_H__
#define __BINARY_ITERATOR_H__
#include "iterator.hpp"

/*
will be used to iterate over expression tree classes with two children. 
This means it's first will initialize to the left child, 
and its next will cycle from left child, to right child, then to nothing.
 */
class BinaryIterator : public Iterator{
    //Base* self_ptr;
    private:
       Base* node;
    public:
        //if error, write constructor that initializes node with nullptr, and call parent constructor;
        /* Sets up the iterator to start at the beginning of traversal */
        BinaryIterator(Base* n) : Iterator(n) {
            node = nullptr;
        }

        void first() {
           node = self_ptr->get_left();
        }
        
        /* Move onto the next element */
        void next(){
            if(node == self_ptr->get_left()){
                node = self_ptr->get_right();
            }
            else{
                node = nullptr;
            }
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