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
    TreeNode* solve(int left,int right,int start,vector<int>& preorder, vector<int>& inorder)
    {
        if(left==right)
        {
            TreeNode* Node=new TreeNode(inorder[left]);
            return Node;
        }
        else
        {
            bool flag=false;
            TreeNode* Node=new TreeNode();
            for(int j=start;j<preorder.size();j++)
            {
                for(int i=left;i<=right;i++)
                {
                    if(preorder[j]==inorder[i])
                    {
                        Node->val=inorder[i];
                        Node->left=solve(left,i-1,j+1,preorder,inorder);
                        Node->right=solve(i+1,right,j+1,preorder,inorder);
                        flag=1;
                        break;
                    }
                }
                if(flag)break;
            }
            if(!flag)return nullptr;
            return Node;
            
        }
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(0,inorder.size()-1,0,preorder,inorder);
    }
};