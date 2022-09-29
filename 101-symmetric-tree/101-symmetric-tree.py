# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return False
        else:
            return self.sym(root.left,root.right)
    
        
    def sym(self,A,B):
        
        if A==None and B==None:
            return True
        if A==None or B==None:
            return False
        if A.val!=B.val:
            return False
        else:
            k=self.sym(A.left,B.right)
            m=self.sym(A.right,B.left)
            return k and m
        
        
            
            
            