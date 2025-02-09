#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *pre;
    Node *next;
    Node(int val){
        this->val=val;
        this->pre=NULL;
        this->next=NULL;
    }
};
class DoubleLiskedList{ 
public:
    Node *head, *tail;
    int size;
    DoubleLiskedList(){
        head=tail=NULL;
        size=0;
    }

// display
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// display reverse

void displayrev(){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->pre;
    }
    cout<<endl;
}

// insertion at head;

void insertAthead(int val){
    Node *temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
        head=temp;
        temp->pre=NULL;
    }
    size++;
}

//insertion at tail
void insertAttail(int val){
    Node *temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->pre=tail;
        tail->next=temp;
        tail=temp;
        temp->next=NULL;
    }
    size++;
}

// insertion at any index

void insertAtkthIndex(int val,int index){
    Node *temp= new Node(val);
    Node *pointer=head;
    if(index==0) return insertAthead(val);
    if(index==size-1) return insertAttail(val);
    for(int i=1;i<index;i++){
        pointer=pointer->next;
    }
    temp->next=pointer->next;
    temp->pre=pointer;
    pointer->next = temp;
    size++;
}

//deletion at head;

void deleteAtHead(){
    Node *temp=head;
    head=temp->next;
    head->pre=NULL;
    size--;
}

// deletion at tail

void deleteAttail(){
    Node *temp=tail;
    tail=temp->pre;
    tail->next=NULL;
    size--;
}

// deletion at kth index

void deleteAtindex(int index){
    Node *temp=head;
    if(index==0) return deleteAtHead();
    if(index==size-1) return deleteAttail();
    for(int i=1;i<index;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->pre=temp;
    size--;
}

};
int main(){
    DoubleLiskedList ll;
    ll.insertAthead(100);
    ll.insertAthead(1000);
    //ll.display();
    ll.insertAttail(111);
    ll.insertAttail(11111);
    ll.insertAttail(876);
    ll.insertAttail(5443);
    //ll.display();
    ll.insertAtkthIndex(9,2);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    //ll.deleteAttail();
    ll.deleteAtindex(2);
    ll.display();
    ll.deleteAtindex(2);
    ll.display();
    return 0;
}