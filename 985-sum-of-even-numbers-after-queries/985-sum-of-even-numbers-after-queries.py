class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        ans=[]
        temp=0
        for i in nums:
            if i%2==0:
                temp+=i
        for i in queries:
            if nums[i[1]]%2==0:
                temp-=nums[i[1]]
            nums[i[1]]+=i[0]
            if nums[i[1]]%2==0:
                temp+=nums[i[1]]
            ans.append(temp)
        return ans
            