class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        ans=[0 for i in range(len(temperatures))]
        stack=[[temperatures[-1],len(temperatures)-1]]
        for i in range(len(temperatures)-2,-1,-1):
            while(stack and stack[-1][0]<=temperatures[i]):
                stack.pop()
            if stack:
                ans[i]=stack[-1][1]-i
            else:
                ans[i]=0
            stack.append([temperatures[i],i])
            
        return ans
            
            