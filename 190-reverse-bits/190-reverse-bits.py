class Solution:
    def reverseBits(self, n: int) -> int:
        s=''
        while(n!=0):
            s+=str(n%2)
            n=n//2
        while(len(s)!=32):
            s=s+'0'
        return int(s,2)
            
        