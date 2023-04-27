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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==nullptr)return {};
        vector<vector<int>>ans;
        queue<vector<TreeNode*>>Q;
        vector<TreeNode*>curr;
        vector<TreeNode*>next;
        Q.push({root});
        while(!Q.empty())
        {
            vector<int>val;
            curr=Q.front();
            next.clear();
            Q.pop();
            for(auto x:curr)
            {
                if(x->left!=nullptr)next.push_back(x->left);
                if(x->right!=nullptr)next.push_back(x->right);
                val.push_back(x->val);
            }
            ans.push_back(val);
            if(next.size()>0)Q.push(next);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};