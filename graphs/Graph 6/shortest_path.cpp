/**
 * @file shortest_path.cpp
 * @brief Implementation of Dijkstra's Algorithm to find the shortest path in an undirected weighted graph.
 * 
 * This program calculates the shortest path between a source node and a destination node in an undirected weighted graph.
 * It uses Dijkstra's Algorithm, which is a greedy algorithm that finds the shortest path from a source node to all other nodes.
 * 
 * ## Algorithm Overview:
 * 1. **Initialization**:
 *    - Mark the source node with a distance of 0 and all other nodes with infinity (`INT_MAX`).
 *    - Use a min-heap (priority queue) to efficiently fetch the node with the smallest distance.
 *    - Maintain a `parent` map to reconstruct the shortest path after computation.
 * 
 * 2. **Relaxation**:
 *    - For each neighbor of the current node, calculate the potential new distance (`current distance + edge weight`).
 *    - If the new distance is smaller than the previously known distance, update the distance and push the neighbor into the min-heap.
 *    - Update the `parent` map to track the path.
 * 
 * 3. **Termination**:
 *    - Stop the algorithm when the destination node is reached or when all reachable nodes have been processed.
 * 
 * 4. **Path Reconstruction**:
 *    - Use the `parent` map to backtrack from the destination node to the source node and reconstruct the shortest path.
 * 
 * ## Input:
 * - Number of nodes (`n`) and edges (`m`).
 * - List of edges, where each edge is represented as `(u, v, w)`:
 *   - `u` and `v` are the nodes connected by the edge.
 *   - `w` is the weight of the edge.
 * - Source node (`src`) and destination node (`dest`).
 * 
 * ## Output:
 * - Shortest distance from the source node to the destination node.
 * - The path taken to achieve the shortest distance.
 * 
 * ## Example:
 * ```
 * Input:
 * Enter the number of nodes and edges: 5 6
 * Enter the edges (u, v, w):
 * 0 1 4
 * 0 2 1
 * 2 1 2
 * 1 3 1
 * 2 3 5
 * 3 4 3
 * Enter the source and destination nodes: 0 4
 * 
 * Output:
 * Shortest distance from 0 to 4 is 7
 * Path: 0 2 1 3 4
 * ```
 * 
 * ## Key Components:
 * - **Graph Representation**:
 *   - The graph is represented as an adjacency list, where each node points to a list of pairs `(neighbor, weight)`.
 * - **Min-Heap**:
 *   - A priority queue is used to fetch the node with the smallest distance efficiently.
 * - **Relaxation**:
 *   - The process of updating the shortest known distance to a node if a shorter path is found.
 * - **Parent Map**:
 *   - Used to reconstruct the shortest path from the source to the destination.
 * 
 * ## Edge Cases:
 * - If there is no path from the source to the destination, the program outputs "No path exists".
 * - Handles graphs with disconnected components.
 * 
 * ## Complexity:
 * - **Time Complexity**: O((V + E) * log(V)), where `V` is the number of vertices and `E` is the number of edges.
 *   - The log(V) factor comes from the priority queue operations.
 * - **Space Complexity**: O(V + E) for the adjacency list, distance vector, and parent map.
 */
/*
Question->
Given an Undirected weighted graph along with source and destination
find the shortest path b/w the src and dis in term of sum of edges
Dijkstra's Algorithm=->
maintain an min heap
visited ka set 
and mapping maintain(node, distance, via) -? what is the shortest dis from src to distination'
let d1 represent the shortest dis from src to y node
and d2 denotes the shortest dis from src to x node

if(d2+w< d1){
mp[y]=d2+w -> w is weighted
via[y]=x  -> these three line is called relextaion algorithm


Mark the source node with a current distance of 0 and the rest with infinity.

Set the non-visited node with the smallest current distance as the current node.

For each neighbor, N of the current node adds the current distance of the adjacent node with the weight of the edge connecting 0->1. If it is smaller than the current distance of Node, set it as the new current distance of N.

Mark the current node 1 as visited.

Go to step 2 if there are any nodes are unvisited.

} 
*/

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <unordered_map>
using namespace std;

// Function to find the shortest path using Dijkstra's Algorithm
void dijkstra(int src, int dest, vector<vector<pair<int, int>>> &graph, int n) {
    // Min-heap to store {distance, node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

    // Distance vector to store the shortest distance from src to each node
    vector<int> dist(n, INT_MAX);

    // Parent map to reconstruct the path
    unordered_map<int, int> parent;

    // Initialize source node
    dist[src] = 0;
    minHeap.push({0, src});
    parent[src] = -1; // Source has no parent

    while (!minHeap.empty()) {
        int currDist = minHeap.top().first;
        int currNode = minHeap.top().second;
        minHeap.pop();

        // If we reach the destination, stop
        if (currNode == dest) break;

        // Traverse all neighbors of the current node
        for (auto &neighbor : graph[currNode]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            // Relaxation step
            if (currDist + weight < dist[nextNode]) {
                dist[nextNode] = currDist + weight;
                minHeap.push({dist[nextNode], nextNode});
                parent[nextNode] = currNode;
            }
        }
    }

    // Print the shortest distance
    if (dist[dest] == INT_MAX) {
        cout << "No path exists from " << src << " to " << dest << endl;
    } else {
        cout << "Shortest distance from " << src << " to " << dest << " is " << dist[dest] << endl;

        // Reconstruct and print the path
        vector<int> path;
        for (int at = dest; at != -1; at = parent[at]) {
            path.push_back(at);
        }
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    // Graph representation: adjacency list
    vector<vector<pair<int, int>>> graph(n);

    cout << "Enter the edges (u, v, w):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); // Since the graph is undirected
    }

    int src, dest;
    cout << "Enter the source and destination nodes: ";
    cin >> src >> dest;

    dijkstra(src, dest, graph, n);

    return 0;
}




#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Function to construct adjacency 
vector<vector<vector<int>>> constructAdj(vector<vector<int>> 
                             &edges, int V) {
                                 
    // adj[u] = list of {v, wt}
    vector<vector<vector<int>>> adj(V); 

    for (const auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); 
    }
    
    return adj;
}

// Returns shortest distances from src to all other vertices
vector<int> dijkstra(int V, vector<vector<int>> &edges, int src){
    
    // Create adjacency list
    vector<vector<vector<int>>> adj = constructAdj(edges, V);

    // Create a priority queue to store vertices that
    // are being preprocessed.
    priority_queue<vector<int>, vector<vector<int>>, 
                   greater<vector<int>>> pq;

    // Create a vector for distances and initialize all
    // distances as infinite
    vector<int> dist(V, INT_MAX);

    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push({0, src});
    dist[src] = 0;

    // Looping till priority queue becomes empty (or all
    // distances are not finalized) 
    while (!pq.empty()){
        
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        int u = pq.top()[1];
        pq.pop();

        // Get all adjacent of u.
        for (auto x : adj[u]){
            
            // Get vertex label and weight of current
            // adjacent of u.
            int v = x[0];
            int weight = x[1];

            // If there is shorter path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

// Driver program to test methods of graph class
int main(){
    int V = 5;
    int src = 0;

    // edge list format: {u, v, weight}
    vector<vector<int>> edges = {{0, 1, 4}, {0, 2, 8}, {1, 4, 6}, 
                                 {2, 3, 2}, {3, 4, 10}};

    vector<int> result = dijkstra(V, edges, src);

    // Print shortest distances in one line
    for (int dist : result)
        cout << dist << " ";
 
    return 0;
}

