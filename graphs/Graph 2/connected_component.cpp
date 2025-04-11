/*
it is a subset of the given graph that has vertices betweem which there is always a paht
vertices present in 2 diff cc does not have path

*/
#include <iostream>
#include <vector>
#include <list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph; // Adjacency list representation of the graph
int v; // Number of vertices

void add_edge(int source, int destination, bool bi_direction = true) {
    graph[source].push_back(destination);
    if (bi_direction) {
        graph[destination].push_back(source);
    }
}

void dfs(int node,unordered_set<int>&visited){
    visited.insert(node);
    for(auto neighbor : graph[node]){
        if(not visited.count(neighbor)){
            dfs(neighbor,visited);
        }
    }
}

int connected_component(){
    int result=0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
        // go to every vector
        // if from a vertex we can iterate a dfs we got one more cc
        if(visited.count(i)==0){
            result++;
            dfs(i,visited);
        }
    }
}

int main() {
    cin >> v;

    graph.resize(v); // Resize the graph to accommodate `v` vertices
    int e; // Number of edges
    cin >> e;

    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }

    
    return 0;
}