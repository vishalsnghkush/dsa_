#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    // now make  a constructor to give the value;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
int count(Node *head){
    int countNode=0;
    Node *temp=head;
    while(temp!=NULL){
        countNode++;
        temp=temp->next;
    }
    return countNode;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *a=new Node(10);   // new node make an new node 
    Node *b=new Node(11);   // THIS WAY MAKES AN BOX OF PONTER TO NODE OF NAME A WHICH STORE THE ADDRESS OF NEW NODE WHICH HELDS THE VALUE 10
    Node *c=new Node(12);
    Node *d=new Node(13);
    Node *e=new Node(14);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;

    display(a);
    cout<<endl;
    cout<<count(a);

    return 0;
}