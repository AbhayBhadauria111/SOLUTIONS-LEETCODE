# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def solve(root,A):
            if root.left==None and root.right==None:
                A.append(root.val)
            else:
                if root.left:
                    solve(root.left,A)
                if root.right:
                    solve(root.right,A)
        A=[]
        B=[]
        solve(root1,A)
        solve(root2,B)
        return A==B