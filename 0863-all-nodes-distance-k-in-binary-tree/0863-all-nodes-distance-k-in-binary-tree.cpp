/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void traverse(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent)
    {
        if(root==nullptr)return;
        if(root->left!=nullptr)
        {
            parent[root->left]=root;
            traverse(root->left,parent);
        }
        if(root->right!=nullptr)
        {
            parent[root->right]=root;
            traverse(root->right,parent);
        }
    }
    vector<int>solve(TreeNode* root,int k,unordered_set<TreeNode*>&vis, unordered_map<TreeNode*,TreeNode*>&parent)
    {
        if(root==nullptr)return {};
        if(k==0)return {root->val};
        vis.insert(root);
        vector<int>left,right,par;
        if(vis.find(root->left)==vis.end())left=solve(root->left,k-1,vis,parent);
        if(vis.find(root->right)==vis.end())right=solve(root->right,k-1,vis,parent);
        if(vis.find(parent[root])==vis.end())par=solve(parent[root],k-1,vis,parent);
        vector<int>ret;
        for(auto x:left)ret.push_back(x);
        for(auto x:right)ret.push_back(x);
        for(auto x:par)ret.push_back(x);
        return ret;
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        traverse(root,parent);
        unordered_set<TreeNode*>vis;
        return solve(target,k,vis,parent);

    }
};