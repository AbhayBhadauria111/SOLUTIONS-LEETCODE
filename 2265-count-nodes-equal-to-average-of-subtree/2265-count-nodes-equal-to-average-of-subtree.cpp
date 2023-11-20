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
    vector<int> solve(TreeNode * root)
    {
        if(root==nullptr)return {0,0,0};
        else
        {
            vector<int>left=solve(root->left),right=solve(root->right);
            int sum=left[0]+right[0]+root->val;
            int numnodes=(left[1]+right[1]+1);
            int average=sum/numnodes;
            int count=left[2]+right[2]+(root->val==average);
            return {sum,numnodes,count};
        }
    }
public:
    int averageOfSubtree(TreeNode* root) {
        return solve(root)[2];
    }
};