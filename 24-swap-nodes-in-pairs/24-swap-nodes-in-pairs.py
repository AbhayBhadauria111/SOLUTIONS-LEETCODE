# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None:
            return None
        if head.next==None:
            return head
        def swap(head):
            if head==None or head.next==None:
                return 
            else:
                head.val,head.next.val=head.next.val,head.val
                return swap(head.next.next)
        swap(head)
        return head
                
            
                
                
                
        
                
            
                
                
                
        