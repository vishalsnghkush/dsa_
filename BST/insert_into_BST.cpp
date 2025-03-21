#include<iostream>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
    public:
        TreeNode* insertIntoBST(TreeNode* root, int val) {
            if(root->val > val){ // go to left
                if(root->left==NULL){
                    // attach it here
                    TreeNode* temp=new TreeNode(val);
                    root->left=temp;
                }
                else insertIntoBST(root->left,val);
            }
    
            else{
                if(root->right==NULL){
                    TreeNode* temp=new TreeNode(val);
                    root->right=temp;
                }
                else insertIntoBST(root->right,val);
            }
            return root;
        }
    };