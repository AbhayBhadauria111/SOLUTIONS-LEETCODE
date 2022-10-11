# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root==None:
            return None
        ans=[]
        queue=[[root]]
        while(queue):
            curr=queue.pop(0)
            temp=[]
            A=[]
            for i in curr:
                A.append(i.val)
                if i.left:
                    temp.append(i.left)
                if i.right:
                    temp.append(i.right)
            if temp!=[]:
                queue.append(temp)
            ans.append(A)
        return ans
                
            