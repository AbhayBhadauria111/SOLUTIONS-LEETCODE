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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr)return {};
        if(root->left==nullptr && root->right==nullptr)return {to_string(root->val)};
        vector<string>left=binaryTreePaths(root->left);
        vector<string>right=binaryTreePaths(root->right);
        vector<string>ans;
        for(auto &x:left)
            ans.push_back(to_string(root->val)+"->"+x);
        for(auto &x:right)
            ans.push_back(to_string(root->val)+"->"+x);
        return ans;
            
    }
};