# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        T=head
        A=[]
        while(T!=None):
            A.append(T)
            T=T.next
            if T in A:
                return True
        return False
        
            
        