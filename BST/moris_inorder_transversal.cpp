/* it is an itrative inorder tranversal where there is no need of any space complexity
sabse pahele hm krge kya ji ek root ke saath ek current ko de dege
aage condition ye hogi ki while(curr!=nullptr) {
agar current ka left exit krta hai then curr ka predecessor find kro


curr->left!=NULL{
find the precedisor
pred=curr->left

while(pre->right){
pre=pre->right
}
}

if  preced->right== null hai then make an farzfi connection of
pre->right=curr
curr=curr->left 

else
me 
visit kro;
then go to the right  since there is no any right so 
curr=curr->right kr do

}

*/



//  v . v . v . imp .
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void morrisInorderTraversal(Node* root) {
    Node* curr = root;
    while (curr != nullptr) { 
        if (curr->left == nullptr) {   // visit
            cout << curr->data << " ";
            curr = curr->right;
        }
        else {     
            Node* pred = curr->left; // predecessor 
            while (pred->right != nullptr && pred->right != curr) {
                pred = pred->right;
        }

        
        if (pred->right == nullptr) { // link
                pred->right = curr;
                curr = curr->left;
        } 
        else {
                pred->right = nullptr;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
   
}