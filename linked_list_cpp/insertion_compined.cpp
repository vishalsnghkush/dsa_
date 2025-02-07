#include<iostream>
using namespace std;
class Node{
public:    
    int val;
    Node *next;
Node(int val){
     this->val=val;
     this->next=NULL;
}
};
class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList(){
        tail=head=NULL;
        size=0;
    }
void insertAtHead(int val){
    Node *temp= new Node(val);
    if(size==0){
        head=tail=temp;
    }
    else{
    temp->next=head;
    head=temp;
    }
    size++;
}
void insertAtTail(int val){
    Node *temp= new Node(val);
    if(size==0){
        head=tail=temp;
    }
    else{
    tail->next=temp;
    tail=temp;
    }
    size++;
}
void insertAtIndex(int val,int index){
    Node *temp= new Node(val);
    if(index==0){
        insertAtHead(val);
    }
    else if(index==size){
        insertAtTail(val);
    }
    else{
        Node *pre=head;
        int i=0;
        while(i<index){
            pre=pre->next;
            i++;
        }
        temp->next=pre->next;
        pre->next=temp;
        size++;
    }
}
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtIndex(11,1);
    ll.insertAtIndex(12,2);
    ll.insertAtTail(24);
    ll.display();
    
    return 0;
}