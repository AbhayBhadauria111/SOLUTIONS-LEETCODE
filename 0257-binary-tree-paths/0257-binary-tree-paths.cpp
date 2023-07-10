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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<stack<int>>A=solve(root);
        vector<string>ans;
        for(auto &x:A)
        {
            string s="";
            while(!x.empty())
            {
                int temp=x.top();
                s+=to_string(temp);
                if(x.size()>1)s+="->";
                x.pop();
            }
            ans.push_back(s);
        }
        for(auto x:ans)cout<<x<<" ";
        return ans;
    }
private:
    vector<stack<int>> solve(TreeNode* root)
    {
        if(root==nullptr)return {};
        if(root->left==nullptr && root->right==nullptr)
        {
            stack<int>S;
            S.push(root->val);
            return {S};
        }
        else
        {
            vector<stack<int>>left=solve(root->left);
            vector<stack<int>>right=solve(root->right);
            vector<stack<int>>ret;
            for(auto x:left)
            {
                x.push(root->val);
                ret.push_back(x);
            }
            for(auto x:right)
            {
                x.push(root->val);
                ret.push_back(x);
            }
            return ret;
        }
    }
};