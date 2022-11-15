# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countNodes(self, root: Optional[TreeNode]) -> int:
        def solve(root):
            if root==None:
                return 0
            else:
                temp=0
                if root.left:
                    temp=1+solve(root.left)
                if root.right:
                    temp+=1+solve(root.right)
                return temp
        if root==None:
            return 0
        return 1+solve(root)
        
        