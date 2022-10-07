class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        numodd=0
        count=0
        ans=0
        ws=0
        for we in range(len(nums)):
            if nums[we]%2!=0:
                numodd+=1
                count=0
            while numodd==k:
                count+=1
                if nums[ws]%2!=0:
                    numodd-=1
                ws+=1
            ans+=count
        return ans
                