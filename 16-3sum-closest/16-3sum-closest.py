class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        last=inf
        for k in range(len(nums)-2):
            i=k+1
            j=len(nums)-1
            while(i<j):
                temp=nums[i]+nums[j]+nums[k]
                if temp==target:
                    return temp
                if (abs(last-target)>abs(temp-target)):
                    last=temp
                if temp>target:
                    j-=1
                else:
                    i+=1
        return last
                
                
                    
                
                
        
        