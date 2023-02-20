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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr)return {};
        vector<vector<int>>ans;
        vector<vector<TreeNode*>>stack;
        int i=1;
        stack.push_back({root});
        vector<TreeNode*>temp;
        vector<int>anstemp;
        while(!stack.empty())
        {
                temp.clear();
                anstemp.clear();
                for(auto x:stack[0])
                {
                    anstemp.push_back(x->val);
                    if(x->right)temp.push_back(x->right);
                    if(x->left)temp.push_back(x->left);
                }
                if(!temp.empty())stack.push_back(temp);
            if(!anstemp.empty())
            if(i==0){i=1;
                ans.push_back(anstemp);}
            else
            {i=0;
                reverse(anstemp.begin(),anstemp.end());
                ans.push_back(anstemp);
            }
                stack.erase(stack.begin());   
        }
        return ans;
        
    }
};