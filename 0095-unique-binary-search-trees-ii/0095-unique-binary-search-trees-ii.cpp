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
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*>ans=solve(1,n);
        return ans;
    }
    vector<TreeNode*>solve(int start,int end)
    {
        if(start>end)
        {
            return {nullptr};
        }
        else
        {
            vector<TreeNode*>temp;
            temp.clear();
            for(int i=start;i<=end;i++)
            {
                vector<TreeNode*>Left=solve(start,i-1);
                vector<TreeNode*>Right=solve(i+1,end);
                for(int j=0;j<Left.size();j++)
                {
                    for(int k=0;k<Right.size();k++)
                    {
                        TreeNode* Node=new TreeNode(i);
                        Node->left=Left[j];
                        Node->right=Right[k];
                        temp.push_back(Node);
                    }
                }
            }
            return temp;
        }
    }
};