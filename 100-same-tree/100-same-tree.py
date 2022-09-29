# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        T1=[]
        T2=[]
        def trav(T,head):
            if head==None:
                T.append('NULL')
                
            else:
                trav(T,head.left)
                trav(T,head.right)
                T.append(head.val)
        trav(T1,p)
        trav(T2,q)
        if T1==T2:
            return True
        return False
            
                    
        
        