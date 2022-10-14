# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr=mid=head
        if curr.next==None:
            return None
        curr=curr.next.next
        while(curr!=None and curr.next!=None):
            mid=mid.next
            curr=curr.next.next
        if mid.next==None:
            return None
        mid.next=mid.next.next
        return head