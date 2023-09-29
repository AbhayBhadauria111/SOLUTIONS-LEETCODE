/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root==nullptr)return nullptr;
        else
        {
            auto left=pruneTree(root->left);
            auto right=pruneTree(root->right);
            if(root->val!=1 and left==nullptr and right==nullptr)
            {
                delete root;
                return nullptr;
            }
            else
            {
                root->left=left;
                root->right=right;
                return root;
            }
        }
    }
};