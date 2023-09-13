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
    TreeNode* create(vector<int>& preorder, vector<int>& inorder,int low,int high,int pre)
    {
        if(low==high){
            TreeNode* N=new TreeNode();
            N->val=inorder[low];
            return N;
        }
        else
        {
            TreeNode* N=new TreeNode();
            for(int j=pre;j<preorder.size();j++)
            {
                int x=preorder[j];
                for(int i=low;i<=high;i++)
                {
                    if(inorder[i]==x)
                    {
                        N->val=x;
                        N->left=create(preorder,inorder,low,i-1,j+1);
                        N->right=create(preorder,inorder,i+1,high,pre);
                        return N;
                    }
                }
            }
            return nullptr;
        }
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.size()==0)return nullptr;
        return create(preorder,inorder,0,inorder.size()-1,0);
    }
};