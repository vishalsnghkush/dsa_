 

  struct TreeNode { 
      int val; 
      TreeNode *left; 
      TreeNode *right; 
      TreeNode(int x) : val(x), left(NULL), right(NULL) {} 
  }; 
 
 class Solution { 
    public: 
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) { 
            if (root == nullptr) return nullptr; // Base case: if root is null
            if (root->val == p->val || root->val == q->val) return root; // If root is p or q
            
            // If p and q are both smaller than root, search in the left subtree
            if (root->val > p->val && root->val > q->val) { 
                return lowestCommonAncestor(root->left, p, q); 
            } 
            
            // If p and q are both greater than root, search in the right subtree
            if (root->val < p->val && root->val < q->val) { 
                return lowestCommonAncestor(root->right, p, q); 
            } 
            
            // If p and q lie on different sides of root, return root
            return root; 
        } 
    };