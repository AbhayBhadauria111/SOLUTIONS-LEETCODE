class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans=[]
        n=1
        for i in nums:
            n=n*i
        for i in range(len(nums)):
            if nums[i]==0:
                temp=1
                for j in range(len(nums)):
                    if i==j:
                        continue
                    else:
                        temp*=nums[j]
                ans.append(temp)
            else:
                ans.append(n//nums[i])
        return ans
        