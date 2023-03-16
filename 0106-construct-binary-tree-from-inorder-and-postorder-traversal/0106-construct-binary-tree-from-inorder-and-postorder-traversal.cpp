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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        n=postorder.size();
        for(int i=0;i<n;i++)
        {indexes[inorder[i]]=i;}
        TreeNode* head=new TreeNode(postorder[n-1]);
        head->left=solve(inorder,postorder,0,indexes[postorder[n-1]]-1);
        head->right=solve(inorder,postorder,indexes[postorder[n-1]]+1,n-1);
        return head;
    }
private:
    map<int,int>indexes;
    int n=0;
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int startInd,int endInd)
    {
        if(endInd<startInd)return nullptr;
        int root=0;
        for(int i=n-1;i>=0;i--)
        {
            if(indexes[postorder[i]]<=endInd and indexes[postorder[i]]>=startInd ){root=i;break;}
        }
        TreeNode* node=new TreeNode(postorder[root]);
        node->left=solve(inorder,postorder,startInd,indexes[postorder[root]]-1);
        node->right=solve(inorder,postorder,indexes[postorder[root]]+1,endInd);
        return node;
    }
};