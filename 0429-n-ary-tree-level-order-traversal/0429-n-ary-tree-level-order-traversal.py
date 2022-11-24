"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def levelOrder(self, root: 'Node') -> List[List[int]]:
        if root is None:
            return None
        Ans=[]
        Queue=[[root]]
        while(Queue):
            temp=Queue.pop()
            childs=[]
            ansarr=[]
            for i in temp:
                ansarr.append(i.val)
                for j in i.children:
                    if j!=None:
                        childs.append(j) 
            Ans.append(ansarr)
            if childs:
                Queue.append(childs)
        return Ans
                
        
        