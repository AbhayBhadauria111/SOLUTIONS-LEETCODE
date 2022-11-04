class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        A=[]
        nums=dict(Counter(nums))
        for i in nums:
            if i%2==0:
                heappush(A,[-nums[i],i])
        if len(A)==0:
            return -1
        return heappop(A)[1]
        