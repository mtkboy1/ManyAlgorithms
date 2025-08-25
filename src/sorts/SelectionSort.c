#define INT_MIN -2147483648
#define INT_MAX 2147483647
#include"SelectionSort.h"
void SelectionSort(int* sortMass, int size){
    int max = INT_MIN;
    int min = INT_MAX;
    int id = -1;
    for(int j = size-1; j>=0; j--){
        max = INT_MIN;
        min = INT_MAX;
        for(int i = 0; i<=j; i++){
            if(max<sortMass[i]){
                id = i;
                max = sortMass[i];
            }
        }
        int swapper = sortMass[id];
        sortMass[id] = sortMass[j];
        sortMass[j] = swapper;
    }
}