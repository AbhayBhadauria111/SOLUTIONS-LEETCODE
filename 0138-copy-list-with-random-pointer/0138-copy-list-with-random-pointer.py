"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""
#         PUtting in dummy NOdes between nodes to acheive result without dictionary
class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if head is None:
            return None
        curr=head
        while(curr!=None):
            N=Node(curr.val,curr.next,curr.random)
            curr.next=N
            curr=N.next
        curr=head
        curr2=head.next
        while(curr2!=None):
            if curr.random:
                curr2.random=curr.random.next
            if curr2.next==None:
                break
            curr=curr.next.next
            curr2=curr2.next.next
        curr=head.next
        while(curr!=None and curr.next!=None):
            curr.next=curr.next.next
            curr=curr.next
        curr=head.next
        while(curr!=None):
            curr=curr.next
        return head.next
        
        