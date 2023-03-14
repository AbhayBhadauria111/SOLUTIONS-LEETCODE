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
    int ans=0;
    int sumNumbers(TreeNode* root) {
        if(root==nullptr)return 0;
        solve(root,0);
        return ans;
    }
private:
  void solve(TreeNode* root,int curr)
  {
        if(root->left==nullptr and root->right==nullptr){ans+=curr*10+root->val;return;}
      curr=curr*10+root->val;
      if(root->left)solve(root->left,curr);
      if(root->right)solve(root->right,curr);
  }
};