#include <iostream>
#include <queue>
using namespace std;

// Node structure for a binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to check if a binary tree is a max-heap
bool isMaxHeap(Node* root) {
    if (!root) return true;

    queue<Node*> q;
    q.push(root);
    bool nullChildEncountered = false;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        // Check left child
        if (current->left) {
            if (nullChildEncountered || current->left->data > current->data) {
                return false;
            }
            q.push(current->left);
        } else {
            nullChildEncountered = true;
        }

        // Check right child
        if (current->right) {
            if (nullChildEncountered || current->right->data > current->data) {
                return false;
            }
            q.push(current->right);
        } else {
            nullChildEncountered = true;
        }
    }

    return true;
}

// Helper function to create a binary tree for testing
Node* createTestTree() {
    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);
    root->right->right = new Node(4);
    return root;
}

int main() {
    Node* root = createTestTree();

    if (isMaxHeap(root)) {
        cout << "The binary tree is a max-heap." << endl;
    } else {
        cout << "The binary tree is not a max-heap." << endl;
    }

    return 0;
}