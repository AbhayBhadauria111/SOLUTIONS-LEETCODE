class Solution:
    def jump(self, nums: List[int]) -> int:
        def jump(i,nums,DP):
            if i>=len(nums)-1:
                return 0
            else:
                if DP[i]!=-1:
                    return DP[i]
                m=inf
                for j in range(1,nums[i]+1):
                    temp=1+jump(i+j,nums,DP)
                    m=min(m,temp)
                DP[i]=m
                return m
        DP=[-1 for i in range(len(nums))]
        return jump(0,nums,DP)
                        
        