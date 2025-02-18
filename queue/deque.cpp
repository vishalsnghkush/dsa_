#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() {
        front = nullptr;
        rear = nullptr;
    }

    // Insert at the front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (front == nullptr) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert at the rear
    void insertRear(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Delete from the front
    void deleteFront() {
        if (front == nullptr) {
            cout << "Deque is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front != nullptr) {
            front->prev = nullptr;
        } else {
            rear = nullptr;
        }
        delete temp;
    }

    // Delete from the rear
    void deleteRear() {
        if (rear == nullptr) {
            cout << "Deque is empty" << endl;
            return;
        }
        Node* temp = rear;
        rear = rear->prev;
        if (rear != nullptr) {
            rear->next = nullptr;
        } else {
            front = nullptr;
        }
        delete temp;
    }

    // Display the elements of the deque
    void display() {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    dq.insertRear(1);
    dq.insertRear(2);
    dq.insertFront(0);
    dq.display(); // Output: 0 1 2
    dq.deleteFront();
    dq.display(); // Output: 1 2
    dq.deleteRear();
    dq.display(); // Output: 1

    return 0;
}
