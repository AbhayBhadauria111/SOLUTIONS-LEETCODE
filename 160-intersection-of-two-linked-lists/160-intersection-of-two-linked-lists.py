# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        S=set()
        while(headB!=None):
            S.add(headB)
            headB=headB.next
        while(headA!=None):
            if headA in S:
                return headA
            headA=headA.next
        return None
        