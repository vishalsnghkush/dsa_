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
// a ke pass b ke access hai similarly /...
// insted of prinitng b.value...i also use (a.next)->value
// for assesing the c i also use
// ((a.next)->next)->value;
int main(){
    Node a(1);
    Node b(2);
    Node c(3);
    Node d(4);
    a.next=&b;      
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    cout<<((a.next)->next)->value;// this will giv the value of c
    // printing using for loop
    Node *temp=&a;
    // this while loop is not good as it give store the value of Null in 3rd iteration itself
    // so to overcome this problem i used an another loop which check the code after printing

    // while(temp.next!=NULL){
    //     cout<<temp.value<<" ";
    //     temp=*(temp.next);
    // }


        
    while(1){ // so that it always true
        cout<<temp->value<<" ";
        if(temp->next==NULL) break; 
        temp=temp->next;
    }
    return 0;
}