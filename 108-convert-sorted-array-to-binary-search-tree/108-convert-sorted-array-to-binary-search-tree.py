# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def create(left,right):
            if left>right:
                return None
            mid=(left+right)//2
            Node=TreeNode(nums[mid])
            Node.left=create(left,mid-1)
            Node.right=create(mid+1,right)
            return Node
        return create(0,len(nums)-1)
            
        
            
        