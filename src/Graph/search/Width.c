#include"Width.h"

int WidthSteps(int** graph, int* visited, int size, int from, int to, struct queue *q, struct queue *steps){
    if(from==to){
        return 0;
    }
    int step = 0;
    char finished = 0;
    add(from,q);
    init(steps);
    add(0,steps);
    while(q->size>0 && finished==0){
        step+=1;
        for(int i = 0; i<size; i++){
            if(visited[i]==0 && getFrist(q)<size&&graph[getFrist(q)][i]==1){
                add(i,q);
                add(getFrist(steps)+1,steps);
                visited[i] = 1;
            }
            if(i==to && graph[getFrist(q)][i]==1){
                return getFrist(steps)+1;
            }
        }
        removeFrist(q);
        removeFrist(steps);
    }
    return -1;
}