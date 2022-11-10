# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        D={root:None}
        Roots=[]
        def Traverse(head,D,Roots):
            if head.left==None and head.right==None:
                Roots.append(head)
            else:
                if head.left:
                    D[head.left]=head
                    Traverse(head.left,D,Roots)
                if head.right:
                    D[head.right]=head
                    Traverse(head.right,D,Roots)
        Traverse(root,D,Roots)
        ans=0
        for i in Roots:
            j=i
            temp=1
            while(D[j]!=None):
                temp+=1
                j=D[j]
            ans=max(ans,temp)
        return ans
        
                
        