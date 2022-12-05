# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if root is None:
            return TreeNode(val)
        def solve(root):
            if root.val>val:
                if root.left:
                    solve(root.left)
                else:
                    root.left=TreeNode(val)
                return
            else:
                if root.right:
                    solve(root.right)
                else:
                    root.right=TreeNode(val)
                return
        solve(root)
        return root
        