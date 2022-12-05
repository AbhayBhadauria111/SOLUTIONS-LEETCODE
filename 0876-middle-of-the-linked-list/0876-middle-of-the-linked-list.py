# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        fast=slow=head
        while(fast!=None and fast.next!=None):
            fast=fast.next.next
            slow=slow.next
        return slow