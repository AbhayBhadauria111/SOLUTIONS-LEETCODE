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
    int minDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        if(root->left==nullptr and root->right==nullptr)return 1;
        int a=INT_MAX,b=INT_MAX;
        if(root->left!=nullptr)a=minDepth(root->left);
        if(root->right!=nullptr)b=minDepth(root->right);
        return 1+min(a,b);
    }
};