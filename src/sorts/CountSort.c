#include"CountSort.h"
#include<malloc.h>
void CountSort(int* sortMass, int size, int borderPlus, int borderMinus){
    int* CountSortChachePlus = calloc(sizeof(int), borderPlus);
    int* CountSortChacheMinus = calloc(sizeof(int), borderMinus);
    for(int i = 0; i<size; i++){
        if(sortMass[i]>0){
            CountSortChachePlus[sortMass[i]] += 1;
        } else {
            CountSortChacheMinus[sortMass[i]*-1] += 1;
        }
    }
    int id = 0;
    for(int i = borderMinus-1; i>=1; i--){
        while(CountSortChacheMinus[i]>0){
            sortMass[id] = -i;
            id+=1;
            CountSortChacheMinus[i]--;
        }
    }
    for(int i = 0; i<borderPlus; i++){
        while(CountSortChachePlus[i]>0){
            CountSortChachePlus[i]-=1;
            sortMass[id] = i;
            id+=1;
        }
    }
    free(CountSortChachePlus);
    free(CountSortChacheMinus);
}