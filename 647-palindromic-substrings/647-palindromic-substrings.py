class Solution:
    def countSubstrings(self, s: str) -> int:
        DP=[[False for i in range(len(s)+1)]for j in range(len(s)+1)]
        count=0
        for g in range(0,len(s)):
            i=0
            j=g
            while(j<len(s)):
                if (g==0):
                    DP[i][j]=True
                    count+=1
                elif g==1:
                    if s[i]==s[j]:
                        DP[i][j]=True
                        count+=1
                    else:
                        DP[i][j]=False
                else:
                    if s[i]==s[j]:
                        DP[i][j]=DP[i+1][j-1]
                        if DP[i][j]==True:
                            count+=1
                    else:
                        DP[i][j]=False
                j+=1
                i+=1
        return count
                    
                    
                    