# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        if root==None:
            return 0
        def solve(root):
            if root==None:
                return 0
            else:
                if root.val>high:
                    return solve(root.left)
                elif root.val<low:
                    return solve(root.right)
                else:
                    temp=root.val
                    temp+=solve(root.left)
                    temp+=solve(root.right)
                    return temp
        return solve(root)
            
            