# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if head==None:
            return None
        temp=head
        curr=head
        while(n!=0):
            n-=1
            temp=temp.next
        if temp==None:
            curr=curr.next
            return curr
        temp=temp.next
        while(temp!=None):
            temp=temp.next
            curr=curr.next
        curr.next=curr.next.next
        return head
        