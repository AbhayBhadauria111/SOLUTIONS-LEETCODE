class Solution:
    def makeGood(self, s: str) -> str:
        stack=[]
        stack.append(s[0])
        for i in range(1,len(s)):
            if len(stack)==0:
                stack.append(s[i]) 
            elif abs(ord(stack[-1])-ord(s[i]))==32:
                stack.pop()
            else:
                stack.append(s[i])
        return ''.join(stack)
        