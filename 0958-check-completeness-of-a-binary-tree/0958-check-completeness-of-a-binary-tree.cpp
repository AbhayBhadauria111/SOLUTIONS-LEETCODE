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
    bool isCompleteTree(TreeNode* root) {
        queue<vector<TreeNode*>>Q;
        vector<TreeNode*>next;
        Q.push({root});
        vector<TreeNode*>curr;
        int last=0;
        while(!Q.empty())
        {
            
            next.clear();
            curr=Q.front();Q.pop();
            for(auto x:curr)
            {
                if(x!=nullptr)
                {
                    next.push_back(x->left);
                next.push_back(x->right);}
            }
            // for(auto x:next)if(x==nullptr)cout<<"null ";else cout<<x->val<<" ";cout<<endl;
            for(int i=0;i<next.size();i++)
            {
                if(last and next[i]!=nullptr)return false;
            }
            int flag=0;
            last=0;
            
            for(int i=next.size()-1;i>=0;i--)
            {
                if(next[i]==nullptr)last++;
                if(next[i]==nullptr and flag==1)return false;
                else
                {
                    if(next[i]!=nullptr)flag=1;
                    
                }
            }
            if(next.size()>0)
         Q.push(next);   
        }
        return true;
        
    }
};