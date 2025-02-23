//only root tree ka address given hoga

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
int sum(Node *root){
    if(root==NULL) return 0;
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    int ans=root->val+leftsum+rightsum;
    return ans;    
}
int size(Node *root){
    // no of nodes
    if(root==NULL) return 0;
    return 1+size(root->right)+size(root->left);

}
void displayTree(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
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
    displayTree(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<size(a);
    return 0;
}