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
    bool solve(TreeNode* r1,TreeNode*r2)
    {
        if(r1==nullptr and r2==nullptr)return true;
        if(r1==nullptr or r2==nullptr)return false;
        if(r1->val!=r2->val)return false;
        return solve(r1->left,r2->right) and solve(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        return solve(root->left,root->right);
    }
};