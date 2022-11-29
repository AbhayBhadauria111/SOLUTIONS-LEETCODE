# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        node=head.next
        curr=node.next
        while(curr is not None):
            if node==curr:
                curr=curr.next
            if curr.val!=0:
                node.val+=curr.val
                curr=curr.next
            else:
                curr=curr.next
                node.next=curr
                node=curr
        return head.next
                
        
                
        