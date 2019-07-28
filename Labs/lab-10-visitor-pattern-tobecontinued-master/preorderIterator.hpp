#ifndef __PREORDERITERATOR_HPP__
#define __PREORDERITERATOR_HPP__

#include <iostream>
#include <stack>
#include "iterator.hpp"
#include "decorator.hpp"

class PreorderIterator : public Iterator
{
    public:
        PreorderIterator(Base* n) : Iterator(n) {
            Decorator* d = new Decorator(n);
            self_ptr = d;
        }

        void first()
        {
            //make sure it is empty
            while(!s.empty())
            {
                s.pop();
            }
            //create iterator pointer
            Iterator* iptr = self_ptr->create_iterator();
            iptr->first();
            //push it inside stack
            s.push(iptr);
        }
        void next()
        {
            //create iterator for the top
            Iterator* itr = current()->create_iterator();
            //initialize
            itr->first();
            //push in the stack
            s.push(itr);
            //
            while(s.top()->is_done())
            {
                s.pop();
                if(!is_done())
                {
                    //advance to next node
                    s.top()->next();
                } else 
                {
                    break;
                }
            }


        }
        bool is_done()
        {
            if (s.empty())
            {
                return true;
            }
            return false;
        }

        //return the current on top of stack
        Base* current()
        {
            //if(!s.empty())
            //{
                return s.top()->current();
            //}
            //else
            //{
                //return nothing
                //return nullptr;
            //}
        }

    private:
        stack<Iterator*> s;

};

#endif
