# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if len(lists)==0:
            return None
        A=[]
        for i in range(len(lists)):
            if lists[i]:
                heappush(A,[lists[i].val,i])
        head=ListNode(0)
        curr=head
        while(A):
            temp=heappop(A)
            curr.next=lists[temp[1]]
            lists[temp[1]]=lists[temp[1]].next
            if lists[temp[1]]:
                heappush(A,[lists[temp[1]].val,temp[1]])
            curr=curr.next
        return head.next
            
            
        