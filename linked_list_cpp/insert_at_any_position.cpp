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
    // insertion 
    void insert(int index,int val){
        // if empty linkedlist
        Node *temp=new Node(val);
        if(size==0){
        head=tail=temp;
        }
        else if (index == 0) { // Insert at the head
            temp->next = head;
            head = temp;
            }
        else if (index >= size) { // Insert at the tail
            tail->next = temp;
            tail = temp;
        } 
        else{
            Node *pre=head;
            int i=0;
            while(i<index){
                pre=pre->next;
                i++;
            }
            // now i have an pointer which store the value of previous elemrnt
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
};
int main(){
    LinkedList ll;
    ll.insert(0,1);
    ll.insert(2,100);
    ll.insert(3,1000);
    ll.insert(3,99);
    ll.insert(4,10000);
    ll.insert(1,10);
    ll.display();
    return 0;
}