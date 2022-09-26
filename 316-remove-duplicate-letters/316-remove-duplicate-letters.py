class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        ans=[]
        loc={}
        for i in range(len(s)):
            loc[s[i]]=i
        S=set()
        for i in range(len(s)):
            if s[i] not in S:
                while len(ans)>0 and s[i]<ans[-1] and loc[ans[-1]]>i:
                    S.remove(ans.pop())
                ans.append(s[i])
                S.add(s[i])
        return ''.join(ans)
            
        