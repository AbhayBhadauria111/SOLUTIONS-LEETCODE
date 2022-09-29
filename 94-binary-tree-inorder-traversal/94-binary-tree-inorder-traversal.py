# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        
        ans=[]   
        def Trav(self,root):
            if root==None:
                return None
            else:
                Trav(self,root.left)
                ans.append(root.val)
                Trav(self,root.right)
        if root==None:
            return None
        else:
            Trav(self,root)
            return ans