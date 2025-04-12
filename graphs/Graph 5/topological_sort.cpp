/*
dependency resolution-> dependency problem
Asysclic graph 
and directed 



DAG =DIRECTED ACYCLIC GRAPH
to resolve DAG we have Topological sort
 
dependent wali condition banana hai aapnu ko

*/

/*
BFS/DFS Dono ko use kr sakte hai'
Kahn's algorithm->Indegree pr depend kr ta hai
Indegree of a node is defined as how many incoming edges can have
Jin Jin node is indegree 0 hai use queue me insert kro
or indegree ke ek array bhi bana sakte ho

*/

/*

*/

#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void add_edge(int a,int b,bool bidirectional=true){
    graph[a].push_back(b);
    if(bidirectional){
        graph[b].push_back(a);
    }
}

void topological(){
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        // now explore all the vertex of the neighbour
        for(auto neighbour : graph[i]){
            // i--> neighbour
            indegree[neighbour]++;
        }
    }
    queue<int>q;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            visited.insert(i);
        }
    }

    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(auto neighbour : graph[node]){
            if(not visited.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}


int main(){
    cin>>v;
    int e;
    cin>>e;
    while(e--){
        int x,y;
        cin>>x,y;
        add_edge(x,y,false);
    }
    topological();
}