#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H
#include "SimpleVector.h"

class SortableVector {
private: SimpleVector<int> sorted;

public:


    SortableVector(SimpleVector<int> v, int s){
    //Insert Sort here
    bool swap;
    int temp;

    do {
        swap = false;
        for (int count = 0; count < (s - 1); count ++){
            if (v[count] > v[count + 1]){
                temp = v[count];
                v[count] = v[count +1];
                v[count + 1] = temp;
                swap =  true;
            }
        }
    }while (swap);
    //End sort

    //Set values to private array sorted
    for (int i = 0; i < 10; i++){
        sorted[i] = v[i];
     }
    }



};

#endif // SORTABLEVECTOR_H
