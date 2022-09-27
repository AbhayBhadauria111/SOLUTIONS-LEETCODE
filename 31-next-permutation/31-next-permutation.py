class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        f=0
        for i in range(len(nums)-2,-1,-1):
            for j in range(len(nums)-1,i,-1):
                if nums[j]>nums[i]:
                    nums[j],nums[i]=nums[i],nums[j]
                    nums[i+1:]=nums[i+1:][::-1]
                    f=1
                    break
            if f==1:
                break
        if f==0:
            nums.sort()
        
        