class Solution:
    def canJump(self, nums: List[int]) -> bool:
        L=len(nums)-1
        for i in reversed(range(len(nums)-1)):
            if nums[i]+i>=L:
                L=i
        if L==0:
            return True
        return False
                
        