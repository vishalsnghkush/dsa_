#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class BinaryTree {
public:
    TreeNode* constructTreeFromLevelOrder(const vector<int>& levelOrder) {
        if (levelOrder.empty()) return nullptr;

        TreeNode* root = new TreeNode(levelOrder[0]);
        queue<TreeNode*> q;
        q.push(root);

        int i = 1;
        while (i < levelOrder.size()) {
            TreeNode* current = q.front();
            q.pop();

            // Process the left child
            if (i < levelOrder.size() && levelOrder[i] != -1) {
                current->left = new TreeNode(levelOrder[i]);
                q.push(current->left);
            }
            ++i;

            // Process the right child
            if (i < levelOrder.size() && levelOrder[i] != -1) {
                current->right = new TreeNode(levelOrder[i]);
                q.push(current->right);
            }
            ++i;
        }

        return root;
    }

    void printLevelOrder(TreeNode* root) {
        if (!root) return;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            cout << node->val << " ";
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
};

int main() {
    vector<int> levelOrder = {1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1};
    BinaryTree bt;
    TreeNode* root = bt.constructTreeFromLevelOrder(levelOrder);

    cout << "Level Order Traversal of Constructed Tree: ";
    bt.printLevelOrder(root);

    return 0;
}
