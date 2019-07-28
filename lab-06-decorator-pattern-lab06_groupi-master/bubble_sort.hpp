#ifndef __BUBBLE_SORT__
#define __BUBBLE_SORT__

#include "container.hpp"
#include "sort.hpp"

class Bubble_sort : public Sort
{
    public:
        Bubble_sort() : Sort(){};
        void sort(Container* container)
        {
            bool isSwap = true;
            for(int i = 1; i <= container->size() && isSwap; i++)
            {
                isSwap = false;
                for(int j = 0; j < container->size()-i; j++)
                {
                    if(container->at(j)->evaluate() > container->at(j+1)->evaluate())
                    {
                        container->swap(j, j+1);
                        isSwap = true;
                    }
                }
            }
            
        }
              

};


#endif
