class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        stack=[]
        for i in s:
            if i=='(':
                stack.append(-1)
            else:
                if stack[-1]==-1:
                    stack.pop()
                    stack.append(1)
                else:
                    total=0
                    while(len(stack)!=0 and stack[-1]!=-1):
                        total+=stack.pop()
                    
                    stack.pop()
                    stack.append(2*total)
        return sum(stack)
    