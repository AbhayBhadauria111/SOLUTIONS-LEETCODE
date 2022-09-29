# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        def DFS(root,ans,s):
            if root==None or (root.left==None and root.right==None):
                if root!=None:
                    s+=str(root.val)+'->'
                    ans.append(s[:-2])
                return 
            else:
                s+=str(root.val)+'->'
                DFS(root.left,ans,s)
                DFS(root.right,ans,s)
        ans=[]
        DFS(root,ans,'')
        return ans