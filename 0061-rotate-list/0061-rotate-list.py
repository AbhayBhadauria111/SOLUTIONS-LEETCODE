# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head is None:
            return None
        L=0
        curr=head
        while(curr!=None):
            curr=curr.next
            L+=1
        k=k%L
        curr=head
        for i in range(k):
            H=curr
            prev=curr
            curr=curr.next
            while(curr.next!=None):
                curr=curr.next
                prev=prev.next
            curr.next=H
            prev.next=None
        return curr
        
        