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
    bool lastlevel(vector<TreeNode*>arr)
    {
       for(auto x: arr)
       {
           if(x!=nullptr and (x->left!=nullptr or x->right!=nullptr))return false;
           
       }
        return true;
    }
    bool nullexists(vector<TreeNode*>arr)
    {
        for(auto x: arr)if(x==nullptr)return true;
        return false;
    }
    bool valid(vector<TreeNode*>arr)
    {
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==nullptr and arr[i+1]!=nullptr )return false;   
        }
        return true;
    }
    bool isCompleteTree(TreeNode* root) {
        vector<TreeNode*>currlevel;
        vector<TreeNode*>nextlevel;
        currlevel.push_back(root);
        while(!currlevel.empty())
        {
            nextlevel.clear();
            for(auto x:currlevel)
            {
                if(x->left)nextlevel.push_back(x->left);
                else nextlevel.push_back(nullptr);
                if(x->right)
                nextlevel.push_back(x->right);
                else nextlevel.push_back(nullptr);
            }
            if(lastlevel(nextlevel))
            {
                if(valid(nextlevel))return true;
                return false;
            }
            else
            {
            if(nullexists(nextlevel))return false;
             currlevel=nextlevel;  
            }
        }
        return false;
    }
};