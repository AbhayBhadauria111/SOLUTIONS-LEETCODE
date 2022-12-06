# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTilt(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        else:
            a=self.findTilt(root.left)
            b=self.findTilt(root.right)
            l=root.left.val if root.left else 0
            r=root.right.val if root.right else 0
            root.val+=l+r
            return a+b+abs(l-r)
            
        