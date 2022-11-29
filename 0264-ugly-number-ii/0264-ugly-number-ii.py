class Solution:
    def nthUglyNumber(self, n: int) -> int:
        S=set()
        stack=[1]
        if n==1:
            return 1
        while(True):
            temp=heappop(stack)
            n-=1
            if n==0:
                return temp
            if temp*2 not in S:
                S.add(temp*2)
                heappush(stack,temp*2)
            if temp*3 not in S:
                S.add(temp*3)
                heappush(stack,temp*3)
            if temp*5 not in S:
                S.add(temp*5)
                heappush(stack,temp*5)
                
            
            
            
            
            
            
            
            
        
        