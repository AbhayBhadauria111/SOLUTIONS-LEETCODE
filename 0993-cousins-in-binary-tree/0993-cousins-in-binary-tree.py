# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: Optional[TreeNode], x: int, y: int) -> bool:
        def solve(root,d,x):
            if root==None:
                return [None,-1]
            else:
                a=b=[None,-1]
                if root.left:
                    if root.left.val==x:
                        return [root,d]
                    else:
                        a=solve(root.left,d+1,x)
                if root.right:
                    if root.right.val==x:
                        return [root,d]
                    else:
                        b=solve(root.right,d+1,x)
                if a[0]!=None:
                    return a
                else:
                    return b
        a=solve(root,0,x)
        b=solve(root,0,y)
        if a[0]!=b[0] and a[1]==b[1]:
            return True
        else:
            return False
        
                        
                    
               
                
                
        
        