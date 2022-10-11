"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if root==None:
            return None
        queue=[[root]]
        while(queue):
            temp=queue.pop(0)
            A=[]
            for i in range(len(temp)):
                if i!=len(temp)-1:
                    temp[i].next=temp[i+1]
                if temp[i].left:
                    A.append(temp[i].left)
                if temp[i].right:
                    A.append(temp[i].right)
            
            if A!=[]:
                queue.append(A)
        return root