#ifndef DEPTH_H
#define DEPTH_H
struct Depth
{
    int achivable;
    char isTree;
};
void DepthSearcher(int** graph, int* visited, int size, int from, struct Depth *result, int old);
#endif