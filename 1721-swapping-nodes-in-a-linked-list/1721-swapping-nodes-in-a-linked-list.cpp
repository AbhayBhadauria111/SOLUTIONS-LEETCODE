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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            count++;
            curr=curr->next;
        }
        ListNode* one=nullptr,*two=nullptr;
        curr=head;
        int c=0;
        while(curr!=nullptr)
        {
            c++;
            if(c==k)one=curr;
            if(c==count-k+1)two=curr;
            curr=curr->next;
        }
        int temp=one->val;
        one->val=two->val;
        two->val=temp;
        return head;
    }
};