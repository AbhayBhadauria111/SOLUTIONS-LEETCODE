class Solution(object):
    def numDecodings(self, s):
        """
        :type s: str
        :rtype: int
        """
        def solve(s,i,DP):
            if i>=len(s):
                return 1
            else:
                if s[i]=='0':
                    return 0
                if DP[i]!=-1:
                    return DP[i]
                
                a=b=0
                a=solve(s,i+1,DP)
                if i<len(s)-1:
                    num=int(s[i:i+2])
                    if num<=26:
                        b=solve(s,i+2,DP)
                DP[i]= a+b
                return DP[i]
        DP=[-1 for i in range(len(s)+1)]
        return solve(s,0,DP)
        