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
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp!=nullptr and temp->next!=nullptr)
        {
           int gcdval=gcd(temp->val,temp->next->val);
           ListNode* newNode=new ListNode(gcdval);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=newNode->next;
        }
        return head;
    }
};