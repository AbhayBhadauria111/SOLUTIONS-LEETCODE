# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        def path(root,S):
            if root==None:
                return False
            S+=root.val
            if S==targetSum and root.left==None and root.right==None:
                return True
            else:
                a=path(root.left,S)
                b=path(root.right,S)
                return a or b
        if root==None:
            return False
        return path(root,0)
                
                
        