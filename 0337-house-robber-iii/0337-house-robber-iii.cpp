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
    map<TreeNode*,int>Dict;
    int rob(TreeNode* root) {
     if(root==nullptr)return 0;
        if(root->left==nullptr and root->right==nullptr)return root->val;
        if(Dict[root]!=0)return Dict[root];
        int addcurr=0,a=0,b=0;
        if(root->left)
        {
            a=rob(root->left->left)+rob(root->left->right);
        }
        if(root->right)
        {
            b=rob(root->right->left)+rob(root->right->right);
        }
        addcurr=root->val+a+b;
        int without=0;
        without=rob(root->left)+rob(root->right);
        Dict[root]= max(addcurr,without);
        return Dict[root];
    
    }

};