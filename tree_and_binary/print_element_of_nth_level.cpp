
#include<iostream>
using namespace std;
class Node{ //this is tree node
public:
    int val;
    Node *left;
    Node *right;
Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}   
};

void nth_level(Node *root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nth_level(root->left,curr+1,level);
    nth_level(root->right,curr+1,level);
}
int main(){
    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(5);
    Node *f=new Node(6);
    Node *g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    nth_level(a,1,3); 
    
    return 0;
}