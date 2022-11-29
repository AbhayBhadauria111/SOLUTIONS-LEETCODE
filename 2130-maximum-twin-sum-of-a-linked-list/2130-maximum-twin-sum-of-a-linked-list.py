# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        if head is None:
            return None
        stack=[]
        fast=slow=head
        while(fast!=None and fast.next!=None):
            fast=fast.next.next
            slow=slow.next
        mid=slow
        while(slow!=None):
            stack.append(slow)
            slow=slow.next
        curr=head
        ans=0
        while(curr!=mid):
            ans=max(ans,curr.val+stack.pop().val)
            curr=curr.next
        return ans
            
        
        