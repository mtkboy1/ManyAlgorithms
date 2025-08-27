#include"Width.h"

int WidthSteps(int** graph, int* visited, int size, int from, int to, struct queue *q, struct queue *steps){
    if(from==to){
        return 0;
    }
    int step = 0;
    char finished = 0;
    add(from,q);
    //struct queue steps;
    init(steps);
    add(0,steps);
    /*for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            printf("%i ",graph[i][j]);
        }
        printf("\n");
    }*/
    while(q->size>0 && finished==0){
        step+=1;
        for(int i = 0; i<size; i++){
            //printf("\n%i\n",getFrist(q));
            if(visited[i]==0 && getFrist(q)<size&&graph[getFrist(q)][i]==1){
                add(i,q);
                add(getFrist(steps)+1,steps);
                visited[i] = 1;
            }
            if(i==to && graph[getFrist(q)][i]==1){
                //printf("\n%i",getFrist(q));
                return getFrist(steps)+1;
            }
        }
        //printf("\n%i",getFrist(q));
        removeFrist(q);
        removeFrist(steps);
    }
}