# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return None
        A=[root]
        Arr=[]
        while(A):
            temp=A.pop()
            Arr.append(temp.val)
            if temp.left:
                A.append(temp.left)
            if temp.right:
                A.append(temp.right)
        Arr.sort()
        ans=math.inf
        for i in range(1,len(Arr)):
            ans=min(ans,abs(Arr[i]-Arr[i-1]))
        return ans
        