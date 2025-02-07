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
    // now insertAtBegin
    void insertAtBegin(int val){
        Node *temp=new Node(val);
        // if the size is zero
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
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
};
int main(){
    LinkedList ll;
    ll.insertAtBegin(100);
    ll.insertAtBegin(1000);
    ll.display();
    ll.insertAtBegin(1000);
    ll.display();
    ll.insertAtBegin(1000);
    ll.display();
    cout<<ll.size;
    return 0;
}