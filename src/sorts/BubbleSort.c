#include"BubbleSort.h"
void BubbleSort(int* sortMass, int size){
    int lastElement = size;
    while(lastElement>0){
        for(int i = 0; i<lastElement-1;  i++){
            if(sortMass[i]>sortMass[i+1]){ //SWAP ELEMENTS
                sortMass[i+1] += sortMass[i];
                sortMass[i] = sortMass[i+1] - sortMass[i];
                sortMass[i+1] -= sortMass[i];
            }
        }
        lastElement-=1;
    }
}