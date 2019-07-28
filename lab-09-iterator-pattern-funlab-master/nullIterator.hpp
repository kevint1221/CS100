#ifndef __NULLITERATOR_H__
#define __NULLITERATOR_H__

#include "iterator.hpp"

/*
    will be used to iterate over expression tree classes with no children. 
    In this special case the is_done() function will always return true and the current() function 
    will always return nullptr. The first() and next() functions don't do anything.
 */
class NullIterator : public Iterator{
    //Base* self_ptr;
    private:
       Base* node;
    public:
        NullIterator(Base* node) : Iterator(node) {

        }
        //if error, write constructor that initializes node with nullptr, and call parent constructor;
        /* Sets up the iterator to start at the beginning of traversal */
        void first(){ }
        /* Move onto the next element */
        void next(){ }

        /* Returns if you have finished iterating through all elements */
        bool is_done(){
            return true;
        }

        /* Return the element the iterator is currently at */
        Base* current(){
            return nullptr;
        }
};
#endif