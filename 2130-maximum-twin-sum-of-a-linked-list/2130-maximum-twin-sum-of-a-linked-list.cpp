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
    int pairSum(ListNode* head) {
        vector<int>Arr;
        ListNode*half=head;
        while(head!=nullptr and head->next!=nullptr)
        {
            Arr.push_back(half->val);
            head=head->next->next;
            half=half->next;
        }
        int ans=0;
        int i=Arr.size()-1;
        while(half!=nullptr)
        {
            ans=max(ans,Arr[i]+half->val);
            i--;
            half=half->next;
        }
        return ans;
    }
};