class Solution:
    def numSquares(self, n: int) -> int:
        dp=[0 for i in range(n+1)]
        dp[1]=1
        sq=[]
        i=1
        while(i*i<=n):
            sq.append(i*i)
            i+=1
        for i in range(2,n+1):
            temp=math.inf
            for x in sq:
                if(x<=i):
                    temp=min(temp,dp[i-x])
                else:
                    break
            dp[i]=temp+1
        # print(dp)
        return dp[n]
            
                
                        
                        
        
            
        