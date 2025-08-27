#include<stdio.h>
#include<stdlib.h>
#include"sorts/BubbleSort.h"
#include"sorts/SelectionSort.h"
#include"sorts/QuickSort.h"
#include"sorts/CountSort.h"
#include"Graph/search/Depth.h"
#include"structs/queue.h"
#include"Graph/search/Width.h"
int main(){
    int z;
    scanf("%i", &z);
    //printf("%i\n",z);
    int* v = (int*) calloc(z,sizeof(int));
    int** mas = (int**) calloc(z,sizeof(int*));
    for(int i = 0; i<z; i++){
        mas[i] = (int*) calloc(z,sizeof(int*));
        for(int j = 0; j<z; j++){
            scanf("%i", &mas[i][j]);
        }
    }
    int x;
    int y;
    scanf("%i", &x);
    scanf("%i", &y);
    struct queue q;
    init(&q);
    struct queue s;
    init(&s);
    /*printf("\n%i",x);
    printf("\n%i",y);*/
    printf("\n%i",WidthSteps(mas,v,z,x-1,y-1,&q,&s));
    for(int i = 0; i<z; i++){
        free(mas[i]);
    }
    free(mas);
    free(v);
    return 0;
}