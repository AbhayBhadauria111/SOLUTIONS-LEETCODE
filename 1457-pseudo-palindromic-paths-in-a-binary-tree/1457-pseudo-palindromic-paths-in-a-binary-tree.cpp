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
    bool check(unordered_map<int,int>&values)
    {
        bool odd=false;
        for(auto &x:values)
        {
            if(x.second%2==0)continue;
            else
            {
                if(odd)return false;
                else odd=true;
            }
        }
        return true;
    }
    int traverse(TreeNode* curr,unordered_map<int,int>&values)
    {
        values[curr->val]++;
        if(curr->left==nullptr and curr->right==nullptr)
        {
            int ret=check(values);
            values[curr->val]--;
            return ret;
        }
        else
        {
            int ret=((curr->left!=nullptr)?traverse(curr->left,values):false) + ((curr->right!=nullptr)?traverse(curr->right,values):false);
            values[curr->val]--;
            return ret;
        }
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int>values;
        return traverse(root,values);
    }
};