# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        def traverse(root,depth):
            if root==None or root.left==None and root.right==None:
                return depth
            else:
                a=b=inf
                if root.left!=None:
                    a=traverse(root.left,depth+1)
                if root.right!=None:
                    b=traverse(root.right,depth+1)
                return min(a,b)
        if root==None:
            return 0
        return traverse(root,1)
        