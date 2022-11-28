# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        def solve(root):
            if root.left==None and root.right==None:
                return [1,0]
            else:
                a=b=[0,0]
                if root.left:
                    a=solve(root.left)
                if root.right:
                    b=solve(root.right)
                heightmax=max(a[0],b[0])+1
                ansmax=max(a[0]+b[0],a[1],b[1])
                return [heightmax,ansmax]
        if root==None:
            return 0
        return solve(root)[1]
                    
        
        