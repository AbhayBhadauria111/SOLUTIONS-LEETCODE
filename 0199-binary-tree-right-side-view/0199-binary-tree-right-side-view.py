# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root==None:
            return None
        D={}
        def solve(root,D,i):
            if root.right:
                if D.get(i+1,-1)==-1:
                    D[i+1]=root.right.val
                solve(root.right,D,i+1)
                
            if root.left:
                if D.get(i+1,-1)==-1:
                    D[i+1]=root.left.val
                solve(root.left,D,i+1)
            
        solve(root,D,0)
        A=[]
        D[0]=root.val
        for i in range(len(D)):
            if i in D:
                A.append(D[i])
        return A
            