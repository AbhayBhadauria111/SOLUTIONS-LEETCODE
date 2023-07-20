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
unordered_map<TreeNode*,long long>map;
private:
    long long givsum(TreeNode* root)
    {
        if(root==nullptr)return 0;
        if(map[root]!=0)return map[root];
        return map[root]=(root->val+givsum(root->left)+givsum(root->right))%(1000000007);
    }
    long long solve(TreeNode* root,int tot)
    {
        if(root==nullptr)return 0;
        long long a=0,b=0;
        if(root->left!=nullptr)a=solve(root->left,tot);
        if(root->right!=nullptr)b=solve(root->right,tot);
        long long ret=max(a,b);
        long long rs=0,ls=0;
        if(root->left!=nullptr)
        {
            ls=givsum(root->left);
            ret=max(ret,ls*(tot-ls));
        }
        if(root->right!=nullptr)
        {
            rs=givsum(root->right);
            ret=max(ret,rs*(tot-rs));
        }
        ret=max(ret,(tot-(root->val+rs+ls))*(root->val+rs+ls));
        return ret;
    }
public:
    int maxProduct(TreeNode* root) {
        map.clear();
        int tot=givsum(root);
        return solve(root,tot)%(1000000007);
    }

};