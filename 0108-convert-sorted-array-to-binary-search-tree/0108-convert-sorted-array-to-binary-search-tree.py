# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        if len(nums)==0:
            return None
        def solve(l,h):
            mid=(l+h)//2
            head=TreeNode(nums[mid])
            if mid<h:
                head.right=solve(mid+1,h)
            if mid>l:
                head.left=solve(l,mid-1)
            return head
        return solve(0,len(nums)-1)