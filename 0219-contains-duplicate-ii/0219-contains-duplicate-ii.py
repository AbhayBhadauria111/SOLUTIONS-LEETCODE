class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        D={}
        for i in range(len(nums)):
            
            if D.get(nums[i],-1)==-1:
                D[nums[i]]=i
            else:
                if abs(D.get(nums[i])-i)<=k:
                    return True
                else:
                    D[nums[i]]=i
        return False
        