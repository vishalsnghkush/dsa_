
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
int level(Node *root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void nth_level(Node *root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nth_level(root->left,curr+1,level);
    nth_level(root->right,curr+1,level);
}
void levelorder(Node *root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nth_level(root,1,i);
        cout<<endl;
    }
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
    levelorder(a); 
    
    return 0;
}