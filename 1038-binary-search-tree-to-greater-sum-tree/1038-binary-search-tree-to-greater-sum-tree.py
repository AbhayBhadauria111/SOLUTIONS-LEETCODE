# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        def solve(root,val):
            if root.left is None and root.right is None:
                root.val+=val
                return root.val
            else:
                a=val
                b=0
                if root.right:
                    a=solve(root.right,val)
                root.val+=a
                if root.left:
                    b=solve(root.left,root.val)
                return max(root.val,b)
        solve(root,0)
        return root