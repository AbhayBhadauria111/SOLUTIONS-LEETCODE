"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if head is None:
            return None
        D={}
        curr=head
        while(curr!=None):
            if curr==head:
                HEAD=Node(curr.val)
                curr2=HEAD
                D[curr]=curr2
            else:
                N=Node(curr.val)
                curr2.next=N
                curr2=curr2.next
                D[curr]=N
            curr=curr.next
        curr2=HEAD
        curr=head
        while(curr!=None):
            if curr.random:
                curr2.random=D[curr.random]
            curr=curr.next
            curr2=curr2.next
        return HEAD
                
        
            
        