#ifndef __SELECTION_SORT__
#define __SELECTION_SORT__

#include "container.hpp"
#include "sort.hpp"


class Selection_sort: public Sort
{
    public:
        Selection_sort() : Sort(){};
        void sort(Container* container)
        {

            int i = 0; 
            int j = 0;
            int s = container->size();
            for (j = 0; j< s-1; j++)
            {
                int min = j;
                for(i = j + 1;i < s; i++)
                {
                    if (container->at(i)->evaluate() < container->at(min)->evaluate())
                    {
                        min = i;
                    }
                } 
                
                if ( min != j)
                {
                    container->swap(j, min);
                }
            }    

        }   


 
};

#endif
