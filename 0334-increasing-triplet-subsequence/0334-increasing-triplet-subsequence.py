class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        right=[0 for i in range(len(nums))]
        stack=[]
        i=len(nums)-1
        while(i>=0):
            if len(stack)==0:
                stack.append(nums[i])
                right[i]=0
                i-=1
            else:
                while(len(stack)!=0 and stack[-1]<=nums[i]):
                    stack.pop()
                if len(stack)==0:
                    right[i]=0
                else:
                    right[i]=1
                stack.append(nums[i])
                i-=1
        stack=[]
        left=[]
        for i in nums:
            if len(stack)==0:
                left.append(0)
                stack.append(i)
            else:
                while(len(stack)!=0 and stack[-1]>=i):
                    stack.pop()
                if len(stack)==0:
                    left.append(0)
                else:
                    left.append(1)
                stack.append(i)
        for i in range(len(nums)):
            if left[i]==1 and right[i]==1:
                return True
        return False
                
            
        