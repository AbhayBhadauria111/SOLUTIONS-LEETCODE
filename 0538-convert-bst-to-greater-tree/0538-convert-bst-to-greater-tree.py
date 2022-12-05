# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return None
        def solve(root,summ):
            if root==None:
                return 0
            else:
                temp=root.val
                r=solve(root.right,summ)
                root.val+=r+summ
                l=solve(root.left,root.val)
                return temp+r+l
        solve(root,0)
        return root
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
        