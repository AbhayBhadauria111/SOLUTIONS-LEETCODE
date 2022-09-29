# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return None
        stack=[]
        stack.append(root)
        while(stack!=[]):
            c=stack.pop()
            c.left,c.right=c.right,c.left
            if c.left!=None:
                stack.append(c.left)
            if c.right!=None:
                stack.append(c.right)
        return root
        
        