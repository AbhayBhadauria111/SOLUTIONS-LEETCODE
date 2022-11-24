# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        def solve(root):
            if root==p or root==q:
                return root
            else:
                if root.val>p.val and root.val>q.val:
                    return solve(root.left)
                elif root.val<p.val and root.val<q.val:
                    return solve(root.right)
                else:
                    return root
        return solve(root)