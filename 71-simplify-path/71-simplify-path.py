class Solution:
    def simplifyPath(self, path: str) -> str:
        path=path.split('/')
        stack=[]
        for i in path:
            if i=='.' or i=='':
                continue
            elif i=='..':
                if len(stack)>0:
                    stack.pop()
            elif i=='/':
                stack.append(i)
            else:
                stack.append(i)
        ans=''
        
        for i in stack:
            if i!='' and i!='.':
                ans+='/'+i
        if ans=='':
            return '/'
        return ans


