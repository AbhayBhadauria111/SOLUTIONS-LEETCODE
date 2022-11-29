# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return None
        Q=[[root]]
        arr=[]
        while(Q):
            temp=Q.pop(0)
            childs=[]
            val=[]
            for i in temp:
                val.append(i.val)
                if i.left:
                    childs.append(i.left)
                if i.right:
                    childs.append(i.right)
            if childs:
                Q.append(childs)
            arr.append(val)
        ans=-1
        s=-math.inf
        for i in range(len(arr)):
            temp=sum(arr[i])
            if temp>s:
                s=temp
                ans=i+1
        return ans