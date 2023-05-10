/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int count=0,curr,tot=m*n,sr=0,sc=0;
        vector<vector<int>>mat(m,vector<int>(n,-1));
        while(count<tot)
        {
            for(int i=sc;i<n;i++)
            {
                curr=-1;
                if(head!=nullptr)
                {
                    curr=head->val;
                    head=head->next;
                }
                mat[sr][i]=curr;
                count++;
            }
            if(count>=tot)break;
            for(int i=sr+1;i<m;i++)
            {
               curr=-1;
                if(head!=nullptr)
                {
                    curr=head->val;
                    head=head->next;
                }
                mat[i][n-1]=curr;
                count++;
            }
            if(count>=tot)break;
            for(int i=n-2;i>=sc;i--)
            {
                curr=-1;
                if(head!=nullptr)
                {
                    curr=head->val;
                    head=head->next;
                }
                mat[m-1][i]=curr;
                count++;
            }
            for(int i=m-2;i>sr;i--)
            {
                curr=-1;
                if(head!=nullptr)
                {
                    curr=head->val;
                    head=head->next;
                }
                mat[i][sc]=curr;
                count++;
            }
            sc++;sr++;
            n--;m--;
        }
        // for(auto x:mat)
        // {
        //     for(auto y:x)cout<<y<<" ";
        //     cout<<endl;
        // }
        return mat;
    }
};