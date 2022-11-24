class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums=set(nums)
        i=1
        while(True):
            try:
                nums.remove(i)
                i+=1
            except:
                return i
            
        