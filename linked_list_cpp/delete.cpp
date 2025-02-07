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
    head=tail=NULL;
    size=0;
}
// insert at head 
void InsertAtHead(int val){
    Node *temp= new Node(val);
    if(size==0){
        tail=head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    size++;
}

// insert at tail
void InsertAtTail(int val){
    Node *temp= new Node(val);
    if(size==0){
        tail=head=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}

// insert at any index
void InsertAtIndex(int val,int index){
    if(size==0){
        InsertAtHead(val);
    }
    else if(index=size){
        InsertAtTail(val);
    }
    else{
        Node *temp= new Node(val);
        Node *pre=head;
        for(int i=1;i<=index-1;i++){
            pre=pre->next;
        }
        temp->next=pre->next;
        pre->next=temp;
    }
    size++;
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

//delete at head

void deleteAtHead(){
    Node *temp=head;
    head=temp->next;
    size--;
}

// delete at tail
void deleteAtTail(){
    Node *pre=head;
    while(pre->next!=tail){
        pre=pre->next;
    }
    tail=pre;
    tail->next=NULL;
    size--;
}

// delete at any index
void deleteAtIndex(int index){ 
    if(index==0) deleteAtHead();
    else if(index==size-1) deleteAtTail();
    else{
        Node *pre=head;
        for(int i=0;i<index-1;i++){
            pre=pre->next;
        }
        Node *temp=pre->next;
        pre->next=temp->next;
        size--;
    }   
    
}

};
int main(){
    LinkedList ll;
    ll.InsertAtHead(10);
    ll.InsertAtIndex(12,1);
    ll.InsertAtIndex(14,2);
    ll.InsertAtIndex(16,3);
    ll.InsertAtIndex(18,4);
    ll.InsertAtTail(20);
    ll.display();
    cout<<endl;
    cout<<ll.size;
    cout<<endl;
    ll.deleteAtHead();
    cout<<ll.size;
    cout<<endl;
    ll.display();
    ll.deleteAtIndex(2);
    ll.display();
    ll.deleteAtTail();
    ll.display();
    return 0;
}