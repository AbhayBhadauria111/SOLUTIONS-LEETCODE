class Solution:
    def partition(self, s: str) -> List[List[str]]:
        def ispal(s):
            n=len(s)
            for i in range(n//2):
                if s[i]!=s[n-i-1]:
                    return False
            return True
        def solve(s,temp,Ans):
            if len(s)==0:
                Ans.append(temp)
                return
            for i in range(1,len(s)+1):
                if ispal(s[:i]):
                    solve(s[i:],temp+[s[:i]],Ans)
        Ans=[]
        solve(s,[],Ans)
        return Ans
                
                
                
                
                
                