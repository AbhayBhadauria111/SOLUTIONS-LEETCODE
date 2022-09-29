# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def rev(head):
            if head==None or head.next==None:
                return head
            node=rev(head.next)
            head.next.next=head
            head.next=None
            return node
            
        return rev(head)
            
        