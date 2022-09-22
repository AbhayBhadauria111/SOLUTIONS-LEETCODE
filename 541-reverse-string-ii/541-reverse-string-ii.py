class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        j=0
        A=[]
        t=''
        for i in range(len(s)):
            t+=s[i]
            if len(t)==k:
                A.append(t)
                t=''
                continue     
        A.append(t)
        for i in range(0,len(A),2):
            A[i]=A[i][::-1]
        return ''.join(A)
            
            