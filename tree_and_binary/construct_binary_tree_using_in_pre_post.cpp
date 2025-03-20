/* pre ans in order given hai then i have to do
 i can make an multiple trees by a given pre order  and inorder
 so for unique i need to consider the pre and in bothh
 i need to run the reccursion call so that i can calculate the output becz in pre root->left->right
and in in-> left->root->right
 it calculate the
class Solution {
public:
    TreeNode *build(vector<int>& pre, int prelo, int prehi, vector<int>& in, int inlo, int inhi) {
        // Base case: If the range is invalid, return NULL
        if (prelo > prehi) return NULL;

        // Create the root node using the first element in the current preorder range
        TreeNode *root = new TreeNode(pre[prelo]);

        // Base case: If there's only one element, return the root
        if (prelo == prehi) return root;

        // Find the root's index in the inorder array
        int i = inlo;
        while (i <= inhi) {
            if (in[i] == pre[prelo]) break;
            i++;
        }

        // Calculate the size of the left and right subtrees
        int leftCount = i - inlo; // Number of nodes in the left subtree
        int rightCount = inhi - i; // Number of nodes in the right subtree

        // Recursively build the left and right subtrees
        root->left = build(pre, prelo + 1, prelo + leftCount, in, inlo, i - 1);
        root->right = build(pre, prelo + leftCount + 1, prehi, in, i + 1, inhi);

        return root;
    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size(); // Size of the arrays
        return build(pre, 0, n - 1, in, 0, n - 1); // Call the helper function
    }
};
*/
