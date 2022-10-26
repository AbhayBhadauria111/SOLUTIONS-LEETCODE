class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        indexofSums={0:-1}
        temp=0
        for i in range(len(nums)):
            temp=(temp+nums[i])%k
            if temp in indexofSums:
                if (i-indexofSums[temp])>1:
                    return True
            else:
                indexofSums[temp]=i
        return  False
        
            
        
#         LOGIC YE HAI KI CUMULATIVE SUM AGAR SAME AAGYA KAHI DO JAGAH PE TO THAT MEANS KE INKE BEECH ME JITNE NUMBERS HAI UNKA SUM DIVISIBLE HOGA K SE
        
        
        
        