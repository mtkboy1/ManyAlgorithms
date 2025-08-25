#include"QuickSort.h"
void QuickSort(int* sortMass, int size){
    SortSubarray(sortMass,0,size-1);
}
void swap(int* sortMass, int swap1, int swap2){
    int swapper = sortMass[swap1];
    sortMass[swap1] = sortMass[swap2];
    sortMass[swap2] = swapper;
}
void SortSubarray(int* sortMass,int start, int end){
    if(start>=end){
        return;
    }
    int current = start;
    for(int i = start+1; i<=end; i++){
        if(sortMass[i]<sortMass[start]){
            swap(sortMass,++current,i);
        }
    }
    swap(sortMass,start,current);
    if(current>start){
        SortSubarray(sortMass,start,current-1);
    }
    if(end>current+1){
        SortSubarray(sortMass,current+1,end);
    }
}