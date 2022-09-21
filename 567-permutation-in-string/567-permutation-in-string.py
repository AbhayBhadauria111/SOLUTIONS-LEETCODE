class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        l=0
        r=len(s1)-1
        A=[0]*26
        B=[0]*26
        for i in s1:
            A[ord(i)-97]+=1
        for i in s2[l:r+1]:
            B[ord(i)-97]+=1
        while(r<len(s2)):
            if A==B:
                return True
            else:
                B[ord(s2[l])-97]-=1
                l+=1
                r+=1
                if r<len(s2):
                    B[ord(s2[r])-97]+=1
        return False
            
            
                
                
            
                
            
            