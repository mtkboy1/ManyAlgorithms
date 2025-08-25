#include"queue.h"

void init(struct queue* q){
    q->size = 0;
    q->st = calloc(q->size,sizeof(int));
}
void add(int i, struct queue* q){
    struct queue new_q;
    //new_q.st = calloc(q->size,sizeof(int));
    //printf("\n%i",q->st[0]);
    new_q.st = realloc(q->st,sizeof(int)*(q->size+1));
    new_q.size = q->size;
    new_q.size++;
    new_q.st[q->size] = i;
    *q = new_q;
    //printf("%i",q->size);
    //q->st[q->size-1] = i;
    
}
void removeFrist(struct queue* q){
    struct queue new_q;
    new_q.st = calloc(q->size,sizeof(int));
    //printf("\n%i",q->st[0]);
    new_q.st = realloc(q->st,sizeof(int)*(q->size-1));
    new_q.size = q->size;
    //new_q.st[q->size] = i;
    *q = new_q;
    for(int i = 1; i<q->size; i++){
        new_q.st[i-1] = q->st[i];
    }
    new_q.size--;
    *q = new_q;
}
int getLast(struct queue* q){
    return q->st[q->size-1];
}
int getFrist(struct queue* q){
    return q->st[0];
}