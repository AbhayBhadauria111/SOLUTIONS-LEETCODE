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
    void traverse(vector<int>&Arr,TreeNode* root)
    {
        if(root==nullptr)return;
        Arr.push_back(root->val);
        traverse(Arr,root->left);
        traverse(Arr,root->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int>Arr;
        traverse(Arr,root);
        sort(Arr.begin(),Arr.end());
        int ans=INT_MAX;
        for(int i=0;i<Arr.size()-1;i++)
            ans=min(ans,Arr[i+1]-Arr[i]);
        return ans;
    }
};