class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        if len(s)==1 or len(s)%2!=0:
            return False
        for i in s:
            if i in ['[','{','(']:
                stack.append(i)
            else:
                if len(stack)==0:
                    return False
                temp=stack.pop()
                if (i==')' and temp=='('):
                    continue
                elif (i=='}' and temp=='{'):
                    continue
                elif (i==']' and temp=='['):
                    continue
                else:
                    return False
        if len(stack)==0:
            return True
        else:
            return False
        