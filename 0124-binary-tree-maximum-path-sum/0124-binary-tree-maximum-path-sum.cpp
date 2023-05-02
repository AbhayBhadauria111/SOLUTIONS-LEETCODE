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
    int ans=INT_MIN;
    int maxPathSum(TreeNode* root) {
         solve(root);
        return ans;
    }
private:
    int solve(TreeNode* root)
    {
        if(root->left==nullptr and root->right==nullptr){
            ans=max(ans,root->val);
            return root->val;
        }
        else
        {
            int a=-10000,b=-10000;
            if(root->left!=nullptr)a=solve(root->left);
            if(root->right!=nullptr)b=solve(root->right);
            // cout<<"asd"<<root->val<<" "<<max({a,b,root->val,a+b+root->val,a+root->val,b+root->val})<<endl;
            ans=max(ans,max({a,b,root->val,a+b+root->val,a+root->val,b+root->val}));
            // cout<<root->val<<" "<<ans<<endl;
            return  max({a+root->val,b+root->val,root->val}) ;
        }
    }
};