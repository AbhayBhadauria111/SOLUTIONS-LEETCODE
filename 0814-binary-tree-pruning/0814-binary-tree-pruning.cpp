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
        return prune(root);
    }
private:
    TreeNode* prune(TreeNode*root)
    {
        if(root==nullptr)return nullptr;
        else
        {
            if(root->left)
            {
                root->left=prune(root->left);
            }
            if(root->right)
            {
                root->right=prune(root->right);
            }
            if(root->left==nullptr and root->right==nullptr)
                {
                    if(root->val==0)return nullptr;
                    else return root;
                }
            return root;
        }
    }
};