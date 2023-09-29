/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==target)return cloned;
        else if(original==nullptr)return original;
        else
        {
            TreeNode * node=getTargetCopy(original->left,cloned->left,target);
            if(node!=nullptr)return node;
            node=getTargetCopy(original->right,cloned->right,target);
            return node;
        }
    }
};