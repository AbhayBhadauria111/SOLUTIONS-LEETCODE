# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        Greater=ListNode(-1)
        Smaller=ListNode(-1)
        s=Smaller
        g=Greater
        while(head!=None):
            if head.val<x:
                s.next=head
                s=s.next
            else:
                g.next=head
                g=g.next
            head=head.next
        s.next=Greater.next
        g.next=None
        return Smaller.next
        
        