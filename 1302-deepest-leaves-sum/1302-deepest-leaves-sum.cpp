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
    int deepestLeavesSum(TreeNode* root) {
        vector<TreeNode*>nextlevel;
        vector<TreeNode*>currlevel;
        currlevel.push_back(root);
        while(!currlevel.empty())
        {
            for(auto x: currlevel)
            {
                if(x->left)nextlevel.push_back(x->left);
                if(x->right)nextlevel.push_back(x->right);
            }
            if(nextlevel.empty())
            {
                int ans=0;
                for(auto x:currlevel)ans+=x->val;
                return ans;
            }
            else{
                currlevel=nextlevel;
                nextlevel.clear();
            }
            
        }
        return 0;
    }
};