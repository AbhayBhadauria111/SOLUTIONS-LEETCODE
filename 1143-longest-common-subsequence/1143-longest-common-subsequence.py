class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        ans=0
        def solve(i,j):
            if D.get((i,j))!=None:
                return D[(i,j)]
            if i==len(text1) or j==len(text2):
                return 0
            else:
                a=b=c=d=0
                if text1[i]==text2[j]:
                    a=1+solve(i+1,j+1)
                b=solve(i+1,j)
                c=solve(i,j+1)
                d=solve(i+1,j+1)
                D[(i,j)]=max(a,b,c,d)
                return D[(i,j)]
        D={}
        return solve(0,0)
        