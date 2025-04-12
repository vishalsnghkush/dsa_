#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
using namespace std;

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<bool> inMST(n, false); // Tracks nodes included in MST
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        int mstCost = 0;
        int edgesUsed = 0;

        // Push the first node into the heap with cost 0
        minHeap.push({0, 0});

        while (edgesUsed < n) {
            pair<int, int> top = minHeap.top();
            int weight = top.first;
            int u = top.second;
            minHeap.pop();

            // If the node is already in MST, skip it
            if (inMST[u]) {
                continue;
            }

            // Include the node in MST
            inMST[u] = true;
            mstCost += weight;
            edgesUsed++;

            // Add all valid edges to the heap
            for (int v = 0; v < n; ++v) {
                if (!inMST[v]) {
                    int dist = abs(points[u][0] - points[v][0]) +
                               abs(points[u][1] - points[v][1]);
                    minHeap.push({dist, v});
                }
            }
        }

        return mstCost;
    }
};

int main() {
    // Example input
    vector<vector<int>> points = {{0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0}};

    // Create Solution object and find the minimum cost to connect all points
    Solution sol;
    int result = sol.minCostConnectPoints(points);

    // Output the result
    cout << "Minimum Cost to Connect All Points: " << result << endl;

    return 0;
}