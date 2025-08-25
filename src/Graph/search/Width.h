#pragma once
#include<stdio.h>
#include"../structs/queue.h"
#ifndef WIDTH_H
#define WIDTH_H
int WidthSteps(int** graph, int* visited, int size, int from, int to, struct queue *q, struct queue *steps);
#endif