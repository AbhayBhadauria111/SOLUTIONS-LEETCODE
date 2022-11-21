# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        #akash sir technique
        A=headA
        B=headB
        while True:
            if A==B:
                return A
            A=A.next
            B=B.next
            if A==None and B==None:
                return None
            if A==None:
                A=headB
            if B==None:
                B=headA
            
        