#include<iostream>
using namespace std;
class Node{
public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            next=NULL;
        }
};
class Queue{
public:    
    Node *tail;
    Node *head;
    int size;
    Queue(){
        size=0;
        tail=head=NULL;
    }
void push(int val){
    Node *temp= new Node(val);
    if(size==0){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        tail = temp;
    }
    size++;
}
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void pop(){
    if(size==0){
        cout<<"Queue is empty !";
        return;
    }
    Node *temp=head;
    head=temp->next;
    delete(temp);
    size--;
}
int front(){
    return head->val;
}
int back() {
    if (size == 0) {
        cout << "Queue is empty!";
        return -1; 
    }
    return tail->val;
}

};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.pop();
    q.display();
    cout<<q.size; 
    cout<<endl;
    cout<<q.front();
    cout<<endl;
    cout<<q.back();
    return 0;
}