class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        t=len(nums)//3
        ans=[]
        D={}
        for i in nums:
            D[i]=D.get(i,0)+1
            if D[i]>t:
                ans.append(i)
                D[i]=-10**9
        return ans
        