# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        def solve(root):
            if root.left==None and root.right==None:
                return [0,True]
            else:
                a=b=[0,True]
                if root.left:
                    a=solve(root.left)
                    a[0]+=1
                if root.right:
                    b=solve(root.right)
                    b[0]+=1
                if a[1]==False or b[1]==False:
                    return [0,False]
                if abs(a[0]-b[0])>1:
                    return [0,False]
                else:
                    return[max(a[0],b[0]),True]
        return solve(root)[1]
                
        