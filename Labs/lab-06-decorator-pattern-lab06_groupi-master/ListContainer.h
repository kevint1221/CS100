#ifndef __LIST_CONTAINER_H__
#define __LIST_CONTAINER_H__

#include"base.hpp"
#include"container.hpp"
#include<list>
#include<iostream>
#include<iterator>
#include<exception>

class ListContainer: public Container{
    protected:
        Sort* sort_function;

    public:
        list<Base*>tree;
        /* Constructors */
        ListContainer() : sort_function(nullptr) { };
        ListContainer(Sort* function) : sort_function(function) { };

        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function){
            this-> sort_function = sort_function;
        }; // set the type of sorting algorithm

        /* Pure Virtual Functions */
        // push the top pointer of the tree into container
        void add_element(Base* element){
            tree.push_back(element);
        }
        // iterate through trees and output the expressions (use stringify())
        void print(){ //print everything in tree
            list <Base*> :: iterator it;
            for(it = tree.begin(); it != tree.end(); it++) {
                cout <<  (*it)->stringify() << ' ';
            }
        }
        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
        void sort(){
            try{
                if(sort_function == nullptr){
                    throw runtime_error("Sortfunction contains none.");
                }
            }
            catch(runtime_error e){
                cout << "Error catched." << endl;
            }
            sort_function->sort(this);
        }

        /* Essentially the only functions needed to sort */
        //switch tree locations
        void swap(int i, int j){
            //assigned iterators for swap
            list<Base*>::iterator itr1 = tree.begin();
            list<Base*>::iterator itr2 = tree.begin();
            //assigned index of iterator to itr1 and itr2
            advance(itr1,i);
            advance(itr2,j);
            //swap the content of the iterators for list
            iter_swap(itr1,itr2);
        }

        // get top ptr of tree at index i
        Base* at(int i){
            list<Base*>::iterator itr = tree.begin();
            int j = 0;
            while(j != i)
            {
                if (j == i)
                {
                    return *itr;
                }
                itr++;
                j++;
            }
            return *itr;

        }


        // return container size
        int size() {
            return tree.size();
        }
        
};
#endif
