import math
class Solution:
    
    #Function to find minimum number of attempts needed in 
    #order to find the critical floor.
    def eggDrop(self,e, f):
        # code here
        def mcm(e,f,dp):
            if e==0 or f==0:
                return f
            if e==1:
                return f
            if dp[e][f]!=-1:
                return dp[e][f]
            res=math.inf
            for i in range(1,f+1):
                t=1+max(mcm(e-1,i-1,dp),mcm(e,f-i,dp))
                res=min(res,t)
            dp[e][f]=res
            return dp[e][f]
        dp=[[-1 for i in range(200)]for j in range(200)]
        return mcm(e,f,dp)

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n,k = map(int,input().strip().split())
        ob=Solution()
        print(ob.eggDrop(n,k))
# } Driver Code Ends