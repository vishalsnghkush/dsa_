#include<iostream>
#include<queue>
#include<limits.h>
#include<stack>
using namespace std;
class Node{
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
Node *construct(int arr[],int n){
    queue<Node *>q;
    int i=1,j=2;
    Node *root= new Node(arr[0]);
    q.push(root);
    while(q.size()>0 && i<n){
    Node *temp=q.front();
    q.pop();
    Node *l;
    Node *r;
    if(arr[i]!=INT_MIN) l=new Node(arr[i]);
    else l=NULL;

    if(arr[j]!=INT_MIN) r=new Node(arr[j]);
    else r=NULL;

    temp->left=l;
    temp->right=r;

    if(l!=NULL) q.push(l);
    if(r!=NULL) q.push(r);

    i+=2;
    j+=2;

    }
return root;    
}
// void levelorder(Node *root){
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()>0){
//         Node *temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left !=NULL) q.push(temp->left);
//         if(temp->right !=NULL) q.push(temp->right);
//     }
//     cout<<endl;
// }
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    // construct
    Node *root=construct(arr,n);
    // preorder
    
    //levelorder(root);
    return 0;
}