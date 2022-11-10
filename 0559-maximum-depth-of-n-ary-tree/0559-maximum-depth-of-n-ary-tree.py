"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if root==None:
            return 0
        def Traverse(count,head):
            if all([i==None for i in head.children]):
                return count+1
            else:
                ans=0
                for i in head.children:
                    ans=max(ans,1+Traverse(count,i))
                return ans
    
        return Traverse(0,root)
                    
            
        