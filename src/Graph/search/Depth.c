#include"Depth.h"

/*struct Depth
{
    int achivable;
    char isTree;
};*/
void DepthSearcher(int** graph, int* visited, int size, int from, struct Depth *result, int old){
    if(visited[from]==1){
        result->isTree = 1;
        return;
    }
    //result->isTree = 1;
    visited[from] = 1;
    result->achivable++;
    //struct Depth v = result;
    for(int i = 0; i<size; i++){
        if(i!=from){
            if(graph[from][i]==1 && old!=i){
                DepthSearcher(graph,visited,size,i,result,from);
            } 
            /*if(graph[from][i]!=0&&visited[i]==1&&old!=i){
                result->isTree = 1;
                printf("%i %i \n",old, i);
            } */
        }
    }
    //return v;
}