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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>D;
        stack<TreeNode*>S;
        S.push(root);
        while(!S.empty())
        {
            TreeNode* curr=S.top();S.pop();
            if(D.find(k-curr->val)!=D.end())return true;
            D.insert(curr->val);
            if(curr->left!=nullptr)S.push(curr->left);
            if(curr->right!=nullptr)S.push(curr->right);
        }
        return false;
    }
};