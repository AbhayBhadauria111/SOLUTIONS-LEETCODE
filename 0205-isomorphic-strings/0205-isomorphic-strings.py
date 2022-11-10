class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        D={}
        for i in range(len(s)):
            if t[i] not in D:
                D[t[i]]=s[i]
            else:
                if D[t[i]]!=s[i]:
                    return False
        D1={}
        for i in range(len(s)):
            if s[i] not in D1:
                D1[s[i]]=t[i]
            else:
                if D1[s[i]]!=t[i]:
                    return False
        return True
        