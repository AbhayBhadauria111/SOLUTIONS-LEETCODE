/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>nodes;
        ListNode* curr=head;
        while(curr)
        {
            if(nodes.find(curr)!=nodes.end())return curr;
            else nodes.insert(curr);
            curr=curr->next;
        }
        return curr;
    }
};