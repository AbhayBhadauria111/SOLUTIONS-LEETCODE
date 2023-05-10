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
class comp{
   public: bool operator()(vector<int>&A,vector<int>&B)
    {
        if(A[1]<B[1])return true;
        if(A[1]==B[1])
        {
            if(A[0]<B[0])return true;
            if(A[0]==B[0])return A[2]<B[2];
            return false;
        }
        return false;
    }
};
class Solution {
    vector<vector<int>>A;
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        A.clear();
        traverse(root,0,0);
        sort(A.begin(),A.end(),comp());
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0;i<A.size();i++)
        {
            if(i==0 or A[i-1][1]!=A[i][1])
            {
                if(temp.size()>0)ans.push_back(temp);
                temp.clear();
            }
            temp.push_back(A[i][2]);
        }
        if(temp.size()>0)ans.push_back(temp);
        return ans;
    }
private:
    void traverse(TreeNode *root,int i,int j)
    {
        if(root==nullptr)return ;
        else
        {
            A.push_back({i,j,root->val});
            traverse(root->left,i+1,j-1);
            traverse(root->right,i+1,j+1);
        }
    }
};