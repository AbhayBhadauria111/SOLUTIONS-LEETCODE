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
    int givecount(TreeNode* root)
    {
        int c=0;
        int t=root->val;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty())
        {
            TreeNode* curr=Q.front();
            if(curr->val==t)c++;
            Q.pop();
            if(curr->left!=nullptr)Q.push(curr->left);
            if(curr->right!=nullptr)Q.push(curr->right);
        }
        return c;
    }
    pair<vector<int>,int>solve(TreeNode* root)
    {
        if(root==nullptr)return {{},0};
        else
        {
            int c=givecount(root);
            pair<vector<int>,int>left=solve(root->left),right=solve(root->right);
            if(left.second<c and right.second<c)
            {
                return {{root->val},c};
            }
            else if(left.second>right.second)
            {
                if(c==left.second)
                {
                    left.first.push_back(root->val);
                }
                return left;
            }
            else if(right.second>left.second)
            {
                if(c==right.second)right.first.push_back(root->val);
                return right;
            }
            else if(left.second==right.second)
            {
                if(c==left.second)
                {
                    left.first.push_back(root->val);
                }
                vector<int>ret;
                for(auto x:left.first)ret.push_back(x);
                for(auto x:right.first)ret.push_back(x);
                return {ret,left.second};
            }
            return {{},0};
        }
    }
public:
    vector<int> findMode(TreeNode* root) {
        return solve(root).first;
    }
};