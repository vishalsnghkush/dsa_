// any path in graph

#include <iostream>
#include <vector>
#include <list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph; 
unordered_set<int>visited;
int v; 

void add_edge(int source, int destination, bool bi_direction = true) {
    graph[source].push_back(destination);
    if (bi_direction) {
        graph[destination].push_back(source);
    }
}

bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr); // mark the visited
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){ // count 0 hoga then
            // explore
            bool result=dfs(neighbour,end);
            if(result) return true;
        }

    }
    return false;
}
bool anyPath(int sourse,int distination){
    return dfs(sourse,distination);
}
int main() {
    cin >> v;

    graph.resize(v); 
    int e;
    cin >> e;

    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y)<<"\n";
    return 0;
}