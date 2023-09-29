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
class Solution1 {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr and root2==nullptr)return nullptr;
        if(!root1 or !root2){
            if(!root1)return root2;
            else return root1;
        }
        else
        {
            root1->val+=root2->val;
            root1->left=mergeTrees(root1->left,root2->left);
            root1->right=mergeTrees(root1->right,root2->right);
            return root1;
        }
    }
};
// EVERY NODE IS NEW NODE
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr and root2==nullptr)return nullptr;
        else
        {
            TreeNode* Node=new TreeNode();
            if(root1)Node->val=root1->val;
            if(root2)Node->val+=root2->val;
            TreeNode*left1=(root1)?root1->left:nullptr;
            TreeNode*left2=(root2)?root2->left:nullptr;
            TreeNode*right1=(root1)?root1->right:nullptr;
            TreeNode*right2=(root2)?root2->right:nullptr;
            Node->left=mergeTrees(left1,left2);
            Node->right=mergeTrees(right1,right2);
            // cout<<Node->val<<endl;

            return Node;
        }
    }
};