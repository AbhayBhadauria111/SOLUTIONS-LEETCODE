class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        if len(nums)<2*k+1:
            return [-1 for i in range(len(nums))]
        S=sum(nums[:2*k+1])
        ans=[]
        ws=0
        we=2*k
        i=0
        while(i<len(nums)):
            if i<k:
                ans.append(-1)
                i=i+1
            elif i>=len(nums)-k:
                ans.append(-1)
                i+=1
            else:
                ans.append(int(S/(2*k+1)))
                if we+1<len(nums):
                    we+=1
                    S+=nums[we]
                S-=nums[ws]
                ws+=1
                i+=1
        return ans
                
            
        
                
            
                
            
        
            
        