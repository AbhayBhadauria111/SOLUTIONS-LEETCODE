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
    TreeNode* getright(TreeNode* node)
    {
        if(node->right==nullptr)return node;
        return getright(node->right);
    }
    TreeNode* deleteNode(TreeNode* node)
    {
        TreeNode* ret;
        if(node->left==nullptr and node->right==nullptr)
        {
            delete node;
            return ret;
        }
        if(node->left==nullptr or node->right==nullptr)
        {
             if(node->left==nullptr)ret=node->right;
            if(node->right==nullptr)ret=node->left;
            delete node;
            return ret;
        }
        
        ret=node->left;
        TreeNode* temp=getright(node->left);
        temp->right=node->right;
        delete node;
        return ret;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)return root;
        if(root->val==key)return deleteNode(root);
        TreeNode* curr=root;
        while(curr!=nullptr)
        {
            if(curr->val>key)
            {
                if(curr->left!=nullptr and curr->left->val==key)
                {
                    curr->left=deleteNode(curr->left);
                    return root;
                }
                else
                {
                    curr=curr->left;
                }
            }
            else
            {
                if(curr->right!=nullptr and curr->right->val==key)
                {
                    curr->right=deleteNode(curr->right);
                    return root;
                }
                else{
                    curr=curr->right;
                }   
            }
        }
        return root;
    }
};