# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        if head is None:
            return None
        curr=head
        stack=[]
        fast=slow=head
        while(fast!=None and fast.next!=None):
            slow=slow.next
            fast=fast.next.next
        if fast==None:
            slow=slow.next
        mid=slow
        while(slow!=None):
            stack.append(slow)
            slow=slow.next
        curr=head
        while(curr!=None):
            temp=curr.next
            if stack:
                curr.next=stack.pop()
                curr.next.next=temp
                curr=temp
            else:
                curr.next=temp
                if temp:
                    temp.next=None
                curr=curr.next
                
            
        
        
            
            