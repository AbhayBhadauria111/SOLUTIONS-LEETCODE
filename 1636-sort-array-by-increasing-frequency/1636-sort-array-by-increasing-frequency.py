class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        A=[]
        nums=dict(Counter(nums))
        for i in nums:
            heappush(A,[nums[i],-i])
        ans=[]
        while(A):
            temp=heappop(A)
            for i in range(temp[0]):
                ans.append(-temp[1])
        return ans
            
        