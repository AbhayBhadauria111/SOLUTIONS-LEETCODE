class Solution:
    def search(self, nums: List[int], target: int) -> int:
        rot=-1
        i=0
        j=len(nums)-1
        while(i<=j):
            mid=(i+j)>>1
            if nums[mid]>nums[-1]:
                rot=mid
                i=mid+1
            else:
                j=mid-1
        print(rot)
        i=0
        j=rot
        while(i<=j):
            mid=(i+j)>>1
            if nums[mid]==target:
                return mid
            if nums[mid]>target:
                j=mid-1
            elif nums[mid]<target:
                i=mid+1
        i=rot+1
        j=len(nums)-1
        while(i<=j):
            mid=(i+j)>>1
            if nums[mid]==target:
                return mid
            if nums[mid]<target:
                i=mid+1
            elif nums[mid]>target:
                j=mid-1
        return -1
        
                
        