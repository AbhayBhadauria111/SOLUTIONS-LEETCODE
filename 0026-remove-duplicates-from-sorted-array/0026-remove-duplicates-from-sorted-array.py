class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        last=None
        for i in range(len(nums)):
            if last!=None and last==nums[i]:
                nums[i]='_'
            else:
                last=nums[i]
        while('_' in nums):
            nums.remove('_')
        return len(nums)
            
        