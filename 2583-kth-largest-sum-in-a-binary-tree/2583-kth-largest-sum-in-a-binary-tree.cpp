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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long>heap;
        queue<vector<TreeNode*>>currlevel;
        vector<TreeNode*>next;
        currlevel.push({root});
        while(!currlevel.empty())
        {
            vector<TreeNode*>temp=currlevel.front();currlevel.pop();
            next.clear();
            long long sumtemp=0;
            for(auto x:temp)
            {
                sumtemp+=x->val;
                if(x->left!=nullptr)next.push_back(x->left);
                if(x->right!=nullptr)next.push_back(x->right);
            }
            heap.push(sumtemp);
            if(!next.empty())
            currlevel.push(next);
        }
        if(k>heap.size())return -1;
        while(k--!=1)
            heap.pop();
        return heap.top();
    }
};