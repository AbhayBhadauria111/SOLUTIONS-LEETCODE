class Solution:
    def medianSlidingWindow(self, nums: List[int], k: int) -> List[float]:
        ans=[]
        for e in range(k-1,len(nums)):
            temp=nums[e-k+1:e+1]
            
            temp.sort()
            
            if k%2==0:
                ans.append((temp[k//2]+temp[k//2-1])/2)
            else:
                ans.append(temp[k//2])
                
        return ans
                         
        