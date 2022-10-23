class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        D=dict(Counter(nums)) 
        ans=[0 for i in range(2)]
        for i in range(1,len(nums)+1):
            if D.get(i,0)==0:
                ans[1]=i
            if D.get(i,0)==2:
                ans[0]=i
        return ans
                