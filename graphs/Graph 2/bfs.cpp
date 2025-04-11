#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <climits>
using namespace std;

int v; // Number of vertices
vector<list<int>> graph;

void add_edge(int source, int destination, bool bi_direction = true) {
    graph[source].push_back(destination);
    if (bi_direction) {
        graph[destination].push_back(source);
    }
}

void bfs(int source, vector<int>& distance) {
    queue<int> q;
    distance.resize(v, INT_MAX);
    distance[source] = 0; // Distance from the source to itself is zero
    q.push(source);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (auto neighbour : graph[curr]) {
            if (distance[neighbour] == INT_MAX) { // Not visited yet
                q.push(neighbour);
                distance[neighbour] = distance[curr] + 1; // Update distance
            }
        }
    }
}

int main() {
    cin >> v; // Input number of vertices
    graph.resize(v); // Resize graph to accommodate `v` vertices
    int e; // Number of edges
    cin >> e;

    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }

    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    vector<int> distance;
    bfs(source, distance);

    cout << "Distances from source " << source << ":\n";
    for (int i = 0; i < v; i++) {
        cout << "Vertex " << i << " -> Distance: " 
             << (distance[i] == INT_MAX ? -1 : distance[i]) << endl;
    }

    return 0;
}