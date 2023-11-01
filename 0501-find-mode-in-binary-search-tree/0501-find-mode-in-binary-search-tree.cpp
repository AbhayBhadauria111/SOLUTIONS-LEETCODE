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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>map;
        stack<TreeNode*>S;
        S.push(root);
        while(!S.empty())
        {
            TreeNode* curr=S.top();S.pop();
            map[curr->val]+=1;
            if(curr->left!=nullptr)S.push(curr->left);
            if(curr->right!=nullptr)S.push(curr->right);
        }
        int count=0;
        vector<int>ans;
        for(auto x:map)
        {
            if(x.second>count)
            {
                ans.clear();
                ans.push_back(x.first);
                count=x.second;
            }
            else if(x.second==count)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};