class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        stack=[]
        ans=0
        for i,j in zip(colors,neededTime):
            if len(stack)==0:
                stack.append((i,j))
            else:
                if stack[-1][0]!=i:
                    stack.append((i,j))
                    
                else:
                    f=0
                    while len(stack)!=0 and stack[-1][0]==i:
                        
                        if j<stack[-1][1]:
                            ans+=j
                            f=1
                            break
                        else:
                            ans+=stack[-1][1]
                            stack.pop()
                    if f==0:
                        stack.append((i,j))
                
        return ans