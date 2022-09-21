class Solution:
    def nextGreaterElement(self, n: int) -> int:
        n=str(n)
        nums=list(map(int,n))
        f=0
        for i in reversed(range(len(nums)-1)):
            for j in reversed(range(i+1,len(nums))):
                if nums[j]>nums[i]:
                    nums[i],nums[j]=nums[j],nums[i]
                    nums[i+1:]=nums[i+1:][::-1]
                    f=1
                    break
            if f==1:
                break
        if f==0:
            return -1
        else:
            n=''.join(map(str,nums))
            n=int(n)
            if n>2147483647:
                return -1
            else:
                return n
                