# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        def solve(root,s):
            if root.left==None and root.right==None:
                s=s+str(root.val)
                return int(s,2)
            else:
                s+=str(root.val)
                a=b=0
                if root.left:
                    a=solve(root.left,s)
                if root.right:
                    b=solve(root.right,s)
                return a+b
        return solve(root,'')
                    
                    
        