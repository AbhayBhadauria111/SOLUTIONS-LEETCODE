# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        def solve(r1,r2):
            if r1==target:
                return r2
            else:
                a=b=None
                if r1.left:
                    a=solve(r1.left,r2.left)
                if r1.right:
                    b=solve(r1.right,r2.right)
                if a!=None:
                    return a
                elif b!=None:
                    return b
                else:
                    return None
        return solve(original,cloned)
        
        