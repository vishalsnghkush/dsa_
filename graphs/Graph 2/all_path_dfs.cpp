// any path in graph

#include <iostream>
#include <vector>
#include <list>
#include<unordered_set>
using namespace std;
vector<vector<int>>result;
vector<int>ans;
vector<list<int>> graph; 
unordered_set<int>visited;
int v; 

void add_edge(int source, int destination, bool bi_direction = true) {
    graph[source].push_back(destination);
    if (bi_direction) {
        graph[destination].push_back(source);
    }
}

void dfs(int curr,int end){
    if(curr==end){
        ans.push_back(curr);
        result.push_back(ans);
        ans.pop_back();
        return;
    }
    visited.insert(curr); // mark the visited
    ans.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){ // count 0 hoga then
            // explore
            dfs(neighbour,end);
        }
    }
    ans.pop_back();
    visited.erase(curr);
    return;
}
void allPath(int sourse,int distination){
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
    allPath(x,y);
    for(auto path :result){
        for(auto el :path){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}