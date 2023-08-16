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
    ListNode* doubleIt(ListNode* head) {
        int carry=0;
        ListNode*temp=head;
        stack<ListNode*>S;
        while(temp!=nullptr)
        {
            S.push(temp);
            temp=temp->next;
        }
        while(!S.empty())
        {
            int temp=S.top()->val;
            temp*=2;
            S.top()->val=temp%10+carry;
            carry=temp/10;
            S.pop();
        }
        if(carry)
        {
            ListNode* T=new ListNode();
            T->val=carry;
            T->next=head;
            head=T;
        }
        return head;
        
        
    }
};