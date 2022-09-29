# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def traverse(root,depth):
            if root==None:
                return depth
            else:
                return max(traverse(root.left,depth+1),traverse(root.right,depth+1))
        return traverse(root,0)
                
        