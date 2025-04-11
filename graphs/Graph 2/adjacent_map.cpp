#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<unordered_map<int,int>>graph; // Adjacency list representation of the graph
int v; // Number of vertices

void add_edge(int source, int destination,int wt ,bool bi_direction = true) {
    graph[source][destination]=wt;
    if (bi_direction) {
        graph[destination][source]=wt;
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " --> ";
        for (auto el : graph[i]) {
            cout << "("<<el.first<< " "<<el.second<<"), ";
        }
        cout << "\n";
    }
}

int main() {
    cin >> v;

    graph.resize(v); // Resize the graph to accommodate `v` vertices
    int e; // Number of edges
    cin >> e;

    while (e--) {
        int s, d,wt;
        cin >> s >> d;
        add_edge(s, d,wt);
    }

    display(); // Call the display function to show the adjacency list

    return 0;
}