#ifndef __VECTOR_CONTAINER_H__
#define __VECTOR_CONTAINER_H__

#include"base.hpp"
#include"container.hpp"
#include<vector>
#include<iostream>
#include<exception>

class VectorContainer: public Container{
    protected:
        Sort* sort_function;

    public:
        vector<Base*>tree;
        /* Constructors */
        VectorContainer() : sort_function(nullptr) { };
        VectorContainer(Sort* function) : sort_function(function) { };


        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function){
            this-> sort_function = sort_function;
        } // set the type of sorting algorithm

        /* Pure Virtual Functions */
        // push the top pointer of the tree into container
      
        void add_element(Base* element){
            tree.push_back(element);
        }
        // iterate through trees and output the expressions (use stringify())
        void print(){ //print everything in tree
            for(Base* t : tree){
                cout << t->stringify() << ' '; 
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
            Base* temp =  tree.at(i);
            tree.at(i) = tree.at(j);
            tree.at(j) = temp;
        }
        // get top ptr of tree at index i
        Base* at(int i){
            return tree.at(i);
        }
        // return container size
        int size() {
            return tree.size();
        }
        
};
#endif
