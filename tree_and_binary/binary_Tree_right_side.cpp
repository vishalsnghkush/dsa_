// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */



//  //hint
 
//  // jo sabse right most hai har level ka usko print kr dena hai bss

//  class Solution {
//     public:
//         int level(TreeNode* root){
//             if(root==NULL) return 0;
//             return 1 + max(level(root->left),level(root->right)); 
//         }
//         void nthlevel(TreeNode* root ,int curr,int level,vector<int>&ans){
//             if(root==NULL) return;
//             if(curr==level){
//                 ans[curr]=root->val;
//                 return;
//             }
//             nthlevel(root->left,curr+1,level,ans);
//             nthlevel(root->right,curr+1,level,ans);
//         }
//         void levelorder(TreeNode *root,vector<int>&ans){
//             int n=ans.size();
//             for(int i=0;i<n;i++){
//                 nthlevel(root,0,i,ans);
//             }
//         }
//         vector<int> rightSideView(TreeNode* root) {
//             vector<int>ans(level(root),0);
//             if(root==NULL) return ans;
//             levelorder(root,ans);
//             return ans;
//         }
//     };