# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return None
        arr=[]
        stack=[]
        curr=root
        while(True):
            while curr is not None:
                stack.append(curr)
                curr=curr.left
            if stack:
                curr=stack.pop()
                arr.append(curr.val)
                curr=curr.right
            else:
                break
        ans=math.inf
        for i in range(1,len(arr)):
            ans=min(arr[i]-arr[i-1],ans)
        return ans
                
            
        