class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack=[]
        for i in s:
            if not stack:
                stack.append(i)
                continue
            if stack[-1]==i:
                stack.pop()
            else:
                stack.append(i)
        return ''.join(stack)
        