# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        f=s=head
        sec=head.next
        while(f!=None and f.next!=None):
            s=f.next
            f.next=s.next
            if f.next==None:
                break
            s.next=f.next.next
            f=f.next
        s.next=None
        f.next=sec
        return head
            
        