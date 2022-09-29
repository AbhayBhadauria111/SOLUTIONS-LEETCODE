class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a=int(a,2)
        b=int(b,2)
        ans=a+b
        if a==0 and b==0:
            return '0'
        A=''
        while(ans!=1):
            A+=str(ans%2)
            ans=ans//2
        A+='1'
        return A[::-1]
            
        
        