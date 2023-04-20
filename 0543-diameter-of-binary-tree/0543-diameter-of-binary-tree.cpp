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
    int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return ans;
    }
    int solve(TreeNode* root)
    {
        if(root==nullptr)return 0;
        else
        {
            int a,b;
            a=solve(root->left);
            b=solve(root->right);
            ans=max(ans,a+b);
            // cout<<root->val<<" "<<a<<" "<<b<<endl;
            return max(a,b)+1;
        }
    }
};