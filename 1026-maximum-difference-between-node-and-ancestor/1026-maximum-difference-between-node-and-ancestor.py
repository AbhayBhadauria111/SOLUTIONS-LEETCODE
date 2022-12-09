# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxAncestorDiff(self, root: Optional[TreeNode]) -> int:
        def solve(root,maxx,minn):
            maxx=max(maxx,root.val)
            minn=min(minn,root.val)
            a=b=-math.inf
            if root.left:
                a=solve(root.left,maxx,minn)
            if root.right:
                b=solve(root.right,maxx,minn)
            ans=max(abs(maxx-root.val),abs(minn-root.val))
            return max(ans,a,b)
        return solve(root,-1,math.inf)
        