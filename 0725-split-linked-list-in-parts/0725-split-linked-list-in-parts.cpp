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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        int count=0;
        while(curr!=nullptr)
        {
            curr=curr->next;
            count++;
        }
        vector<ListNode*>ans;
        int sizeofpart=ceil(count/(float)k);
        int numlargeparts=count%k;
        curr=head;
        while(curr!=nullptr)
        {
            
            ans.push_back(curr);
            for(int i=0;i<sizeofpart-1;i++)
            {
                curr=curr->next;
            }
            if(curr==nullptr)break;
            ListNode*temp=curr->next;
            curr->next=nullptr;
            curr=temp;
            if(numlargeparts)
            {
                numlargeparts--;
                if(!numlargeparts)sizeofpart--;
            }
        }
        while(ans.size()<k)ans.push_back({nullptr});
        return ans;
    }
};