#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<int>> graph; // Adjacency list representation of the graph
int v; // Number of vertices

void add_edge(int source, int destination, bool bi_direction = true) {
    graph[source].push_back(destination);
    if (bi_direction) {
        graph[destination].push_back(source);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " --> ";
        for (auto el : graph[i]) {
            cout << el << " ";
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
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }

    display(); // Call the display function to show the adjacency list

    return 0;
}