# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def traverse(root,A):
            if root==None:
                return
            else:
                traverse(root.left,A)
                A.append(root.val)
                traverse(root.right,A)
        A=[]
        traverse(root,A)
        flag=0
        for i in range(len(A)-1):
            if A[i+1]>A[i]:
                continue
            else:
                flag=1
        if flag==0:
            return True
        else:
            return False
        