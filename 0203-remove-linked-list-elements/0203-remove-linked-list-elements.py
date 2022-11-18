# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if not head:
            return head
        curr=head
        while(curr!=None and curr.val==val ):
            curr=curr.next
            head=curr
        while(curr!=None and curr.next!=None):
            if curr.next.val==val:
                curr.next=curr.next.next
            else:
                curr=curr.next
        return head
                    
            
        