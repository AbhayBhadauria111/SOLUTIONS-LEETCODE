# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy=ListNode
        if(head==None or head.next==None):
            return head
        curr=head
        prev=dummy
        while(curr!=None and curr.next !=None):
            temp=curr.next
            curr.next=temp.next
            temp.next=curr
            prev.next=temp
            prev=curr
            curr=curr.next
        return dummy.next    
        
            
            
        