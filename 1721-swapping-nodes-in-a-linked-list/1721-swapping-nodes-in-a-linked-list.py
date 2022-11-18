# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head==None:
            return None
        f=s=head
        for i in range(k-1):
            f=f.next
        t=f
        while(t.next!=None):
            s=s.next
            t=t.next
        f.val,s.val=s.val,f.val
        return head
        