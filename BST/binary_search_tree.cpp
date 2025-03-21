/*
for every single node left node me choti honi chaiye aur right sub tree me badi honi chaiye
10 root hai to 
left me 5,2,8 i mean 10 se chota hona chaiye aur right me 10 se bada hona chaiye
i need to check every node not only rooot 
can a bst contain duplicate element ?
no -> since there is no any repeated val ->  LST <root->val  <RST


advantages 
efficient searching 
efficient insertion and deletion
not efficient in case of Unbalanced trees


Application
phone book
stock  market analysis

 no of binary tree ?



TC-> BEST CASE O(LOG N);

WROST CASE- O(N);


class Solution {
    public:
        TreeNode* searchBST(TreeNode* root, int val) {
            // here search space is reduced as like binary search
    
            if(root==NULL) return NULL;
            else if(root->val==val) return root;
            else if(root->val>val) return searchBST(root->left,val);
            else return searchBST(root->right,val);
        }
    };


*/