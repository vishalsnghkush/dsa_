#include<iostream>
#include<queue>
#include<stack>
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
void levelorderByQueue(Node *root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node *temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left !=NULL) q.push(temp->left);
        if(temp->right !=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    // bfs using queue
    // e.g -> left 1 > 2 > 4 >5  .. right  ..1 > 3 > 6
    // since in queue we insert the element to the end hence it is much more benificial 
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
    cout<<endl;
    
    levelorderByQueue(a);
    return 0;
}