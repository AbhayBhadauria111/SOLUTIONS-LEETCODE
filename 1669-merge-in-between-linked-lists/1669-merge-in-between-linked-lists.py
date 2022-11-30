# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        c=0
        curr=list1
        while(curr!=None):
            if c+1==a:
                first=curr
            elif c==b:
                sec=curr.next
            c+=1
            curr=curr.next
        first.next=list2
        curr=list2
        while(curr.next!=None):
            curr=curr.next
        curr.next=sec
        return list1
        
            
            