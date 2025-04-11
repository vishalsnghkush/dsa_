#include <bits/stdc++.h>
using namespace std;

// Global arrays for parent and size
vector<int> parent, size;

// Initialize DSU
void initializeDSU(int n) {
    parent.resize(n);
    size.resize(n, 1); // Initial size of each set is 1
    for (int i = 0; i < n; i++) {
        parent[i] = i; // Each element is its own parent initially
    }
}

// Find with path compression
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]); // Path compression
    }
    return parent[x];
}

// Union by size
void unionSets(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (size[a] < size[b]) {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

// Check connectivity
bool isConnected(int a, int b) {
    return find(a) == find(b);
}

int main() {
    int n, m;
    cin >> n >> m; // Number of elements and operations

    // Initialize DSU for n elements
    initializeDSU(n);

    // Perform operations
    for (int i = 0; i < m; i++) {
        string op;
        int a, b;
        cin >> op >> a >> b;
        if (op == "union") {
            unionSets(a, b);
        } else if (op == "find") {
            cout << (isConnected(a, b) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}