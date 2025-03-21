

// one ways of doing this probelm is that i can store all the inorder into an vector
// then use an linear search to find the pre and successor 
// this ways is quite simpler ways to find this


// ANOTHER WAYS

// MORRIS TRAVERSAL

// steps for inorderPredecessor->>
// go left
//  keep going right jab tk ja sate ho i mean null na aa jaye
//


// for susserssor
// stepps

// go to right
// then go to the left until an null


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

Node* findInorderPredecessor(Node* root, Node* target) {
    if (!root) return NULL;
    Node* predecessor = NULL;
    while (root) {
        if (target->data <= root->data) {
            root = root->left;
        } else {
            predecessor = root;
            root = root->right;
        }
    }
    return predecessor;
}

Node* findInorderSuccessor(Node* root, Node* target) {
    if (!root) return NULL;
    Node* successor = NULL;
    while (root) {
        if (target->data >= root->data) {
            root = root->right;
        } else {
            successor = root;
            root = root->left;
        }
    }
    return successor;
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);
    root->right->left = new Node(25);
    root->right->right = new Node(35);

    Node* target = root->left; // Node with value 10

    Node* predecessor = findInorderPredecessor(root, target);
    Node* successor = findInorderSuccessor(root, target);

    if (predecessor) {
        cout << "Inorder Predecessor of " << target->data << " is " << predecessor->data << endl;
    } else {
        cout << "Inorder Predecessor of " << target->data << " does not exist" << endl;
    }

    if (successor) {
        cout << "Inorder Successor of " << target->data << " is " << successor->data << endl;
    } else {
        cout << "Inorder Successor of " << target->data << " does not exist" << endl;
    }

    return 0;
}