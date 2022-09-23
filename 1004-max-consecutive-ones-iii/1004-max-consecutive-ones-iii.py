class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        one=zero=ws=we=ans=0
        while(we<len(nums) and ws<=we):
            if nums[we]==0:
                zero+=1
            else:
                one+=1
            
            if zero<=k:
                ans=max(ans,we-ws+1)
                we+=1
            else:
                if nums[ws]==0:
                    zero-=1
                else:
                    one-=1
                if we!=ws:   
                    if nums[we]==0:
                        zero-=1
                    else:
                        one-=1
                ws+=1
                if ws>we:
                    we+=1
            
                
        return ans
        
        