# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        def solve(root,num):
            if root.left==None and root.right==None:
                return num*10+root.val
            else:
                a=b=0
                if root.left:
                    a=solve(root.left,num*10+root.val)
                if root.right:
                    b=solve(root.right,num*10+root.val)
                return a+b
        if root is None:
            return 0
        return solve(root,0)
        