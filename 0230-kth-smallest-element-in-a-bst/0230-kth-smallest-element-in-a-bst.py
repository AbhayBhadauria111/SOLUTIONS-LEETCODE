# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        if root is None:
            return None
        stack=[root]
        A=[]
        while(stack):
            temp=stack.pop()
            if len(A)<k :
                if A and -A[0]==temp.val:
                    pass
                else:
                    heappush(A,-temp.val)
            else:
                if -A[0]>temp.val:
                    heappop(A)
                    heappush(A,-temp.val)
            if temp.left:
                stack.append(temp.left)
            if temp.right:
                stack.append(temp.right)
        return -A[0]
        
        