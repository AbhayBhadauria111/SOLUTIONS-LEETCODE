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
    vector<int> largestValues(TreeNode* root) {
        if(root==nullptr)return {};
       vector<int>ans;
        queue<vector<TreeNode*>>Q;
        Q.push({root});
        while(!Q.empty())
        {
            vector<TreeNode*>curr=Q.front(),next;Q.pop();
            int maxx=INT_MIN;
            for(auto &x:curr)
            {
                maxx=max(maxx,x->val);
                if(x->left!=nullptr)
                    next.push_back(x->left);
                if(x->right!=nullptr)
                    next.push_back(x->right);
            }
            if(!next.empty())
            Q.push(next);
            next.clear();
            ans.push_back(maxx);
        }
        return ans;
    }
};