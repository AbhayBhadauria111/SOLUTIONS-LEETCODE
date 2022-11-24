# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return None
        def solve(root):
            if root==None or root.left==None and root.right==None:
                return True if root.val==1 else False
            else:
                a=solve(root.left)
                b=solve(root.right)
                if root.val==2:
                    return a or b
                else:
                    return a and b
        return solve(root)
        