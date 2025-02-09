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
void display(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
using namespace std;
int main(){
    Node *a= new Node(10);
    Node *b= new Node(10);
    Node *c= new Node(10);
    Node *d= new Node(10);
    Node *e= new Node(10);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->pre=d;
    d->pre=c;
    c->pre=b;
    b->pre=a;
    display(a);
    return 0;
}