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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>heap;    
     ListNode dummy;
        ListNode* curr=&dummy;
    for(auto x:lists)if(x!=nullptr)heap.push({x->val,x});
    while(!heap.empty())
    {
        pair<int,ListNode*>temp=heap.top();
        heap.pop();
        ListNode* Next=temp.second->next;
        curr->next=temp.second;
        curr=curr->next;
        if(Next!=nullptr)heap.push({Next->val,Next});
    }
    curr->next=nullptr;
    return dummy.next;
        
        
        
        
        
        
        
        
        
        
    }
};