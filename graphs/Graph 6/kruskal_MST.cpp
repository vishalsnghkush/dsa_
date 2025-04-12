// Minimum spanning tree

/*
Tree->A graph having no cycle
it indclude all the node of graph
sum of edge weight is minimum
spanning->subgraph having all vertices but min no of edges avaliable to keep it connected

*/

/*
Algorithm->
1.Kruskals  -> 

overall the only we have a choise oin edges
always pich an edge which have lower weight and by including them no cycle is formed
if choosing an edge forms a cycle avoid it else use it





Algorithm-:>


Sort all the edges in a non-decreasing order of their weight. 

Pick the smallest edge. Check if it forms a cycle with the spanning tree formed so far. If the cycle is not formed, include this edge. Else, discard it. 

Repeat step 2 until there are (V-1) edges in the spanning tree.
.>>
2.Prims

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int src, dest, weight;
};

// Comparator function to sort edges by weight
bool compareEdges(Edge a, Edge b) {
    return a.weight < b.weight;
}

// Find function for Disjoint Set Union (DSU)
int findParent(int node, vector<int>& parent) {
    if (node == parent[node])
        return node;
    return parent[node] = findParent(parent[node], parent);
}

// Union function for DSU
void unionNodes(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = findParent(u, parent);
    v = findParent(v, parent);
    if (rank[u] < rank[v]) {
        parent[u] = v;
    } else if (rank[u] > rank[v]) {
        parent[v] = u;
    } else {
        parent[v] = u;
        rank[u]++;
    }
}

// Kruskal's Algorithm
void kruskalMST(int V, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), compareEdges);

    vector<int> parent(V);
    vector<int> rank(V, 0);

    for (int i = 0; i < V; i++) {
        parent[i] = i;// kudh ko kudh ka parent bana do sabse pahe;e 
    } 

    vector<Edge> mst;
    int mstWeight = 0;

    for (auto edge : edges) {
        if (findParent(edge.src, parent) != findParent(edge.dest, parent)) { // agr equal nahi hai to include kr na hai
            mst.push_back(edge);
            mstWeight += edge.weight;
            unionNodes(edge.src, edge.dest, parent, rank);
        }
    }

    cout << "Edges in the MST:\n";
    for (auto& edge : mst) {
        cout << edge.src << " -- " << edge.dest << " == " << edge.weight << "\n";
    }
    cout << "Total weight of MST: " << mstWeight << "\n";
}

int main() {
    int V = 4; // Number of vertices
    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(V, edges);

    return 0;
}