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
    int findBottomLeftValue(TreeNode* root) {
        queue<vector<TreeNode*>>Q;
        Q.push({root});
        while(!Q.empty())
        {
            vector<TreeNode*>temp;
            vector<TreeNode*>curr=Q.front();Q.pop();
            for(auto x:curr)
            {
                if(x->left!=nullptr)temp.push_back(x->left);
                if(x->right!=nullptr)temp.push_back(x->right);
            }
            if(temp.size()==0)return curr[0]->val;
            Q.push(temp);
        }
        return 0;
    }
};