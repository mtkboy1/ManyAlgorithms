#pragma once
#include <stdlib.h>
#ifndef QUEUE_H
#define QUEUE_H
struct queue{
    int* st;
    int size;
};
void init(struct queue* q);
void add(int i, struct queue* q);
void removeFrist(struct queue* q);
int getLast(struct queue* q);
int getFrist(struct queue* q);
#endif