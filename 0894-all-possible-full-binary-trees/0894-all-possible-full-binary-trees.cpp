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
    
    vector<TreeNode*>solve(int n)
    {
        if(n==1)
        {
            TreeNode* node=new TreeNode();
            return {node};
        }
        else
        {
            vector<TreeNode*>ret,left,right;
            for(int i=1;i<n-1;i+=2)
            {
                left=solve(i);
                right=solve(n-i-1);
                for(auto leftsub:left)
                {
                    for(auto rightsub:right)
                    {
                        ret.push_back( new TreeNode(0,leftsub,rightsub));
                    }
                }
            }
            return ret;
        }
    }
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        return solve(n);
        
    }
};