class Solution:
    def mostCompetitive(self, nums: List[int], k: int) -> List[int]:
        candelete=len(nums)-k
        stack=[]
        for i in nums:
            if len(stack)==0:
                stack.append(i)
            else:
                if stack[-1]>i and candelete>0:
                    while len(stack)!=0 and stack[-1]>i and candelete>0:
                        candelete-=1
                        stack.pop()
                stack.append(i)
        
        return stack[:k] 
        