// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
//     public:
//     bool existsInTree(TreeNode *root, TreeNode *target){
//         if(root==NULL) return false;
//         if(root==target) return true;
//         return existsInTree(root->left,target) || existsInTree(root->right,target); // agar nahi mila to search in left and in right 
//     }
//         TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//             if(root==p || root==q) return root;
//             else if(existsInTree(root->left,p) && existsInTree(root->right,q)) return root;
//             else if(!existsInTree(root->left,p) && !existsInTree(root->right,q)) return root; // nahi left me na hi right me hai then return root
//             else if(existsInTree(root->left,p) && !existsInTree(root->right,q)) return lowestCommonAncestor(root->left,p,q); // p left me hai search kro 
//             else return lowestCommonAncestor(root->right,p,q); // right me hogo

//         }
//     };