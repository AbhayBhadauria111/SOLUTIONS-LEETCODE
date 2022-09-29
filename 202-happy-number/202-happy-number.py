class Solution:
    def isHappy(self, n: int) -> bool:
        s=set()
        S=0
        while(True):
            while(n!=0):
                S+=(n%10)**2
                n=n//10
            if S==1:
                return True
            else:
                n=S
                S=0
                if n not in s:
                    s.add(n)
                else:
                    
                    break
        return False
            
            