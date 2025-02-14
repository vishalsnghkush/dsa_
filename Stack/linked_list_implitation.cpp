/**
 intially head=null
 push(10)
 10    ->null;
 head   
 push(19)
 19    ->   10   ->null
 head          
**/
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
class Stack{
public:    
    Node *head;
    int size;
Stack(){
        head=NULL;
        size=0;
    }
void push(int val){
     Node *temp= new Node(val);
     temp->next=head;
     head=temp;
     size++;
}
void pop(){
    if(head==NULL){
        cout<<"Stack is empty !";
        return;
    }
    head=head->next;
    size--;
}
int top(){
    if(head==NULL){
        cout<<"Stack is empty !";
        return -1;
    }
    return head->val;
}
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print(Node *temp){
    if(temp==NULL) return;
    print(temp->next);
    cout<<temp->val<<" ";
}
void displayrev(){
    Node* temp=head;
    print(temp);
    cout<<endl;
}
};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(29);
    st.push(19);
    st.push(29);
    st.push(19);
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.display();
    st.displayrev();
    return 0;
}