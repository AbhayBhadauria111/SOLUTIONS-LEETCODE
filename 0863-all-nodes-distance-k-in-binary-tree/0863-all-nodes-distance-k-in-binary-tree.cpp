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
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        traverse(root,parent);
        unordered_set<TreeNode*>vis;
        queue<vector<TreeNode*>>Q;
        Q.push({target});
        int count=0;
        parent[root]=nullptr;
        while(count<k)
        {
            count++;
            vector<TreeNode*>curr=Q.front();Q.pop();
            vector<TreeNode*>next;
            for(auto &x:curr)
            {
                vis.insert(x);
                if(x->left!=nullptr and vis.find(x->left)==vis.end())next.push_back(x->left);
                if(x->right!=nullptr and vis.find(x->right)==vis.end())next.push_back(x->right);
                if(parent[x]!=nullptr and vis.find(parent[x])==vis.end())next.push_back(parent[x]);
            }
            Q.push(next);
        }
        vector<int>ans;
        for(auto x:Q.front())ans.push_back(x->val);
        return ans;

    }
};