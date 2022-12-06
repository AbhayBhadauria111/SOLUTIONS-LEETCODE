class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        def isdiv(s,S):
            i=0
            while(i<len(S)):
                if s[i%len(s)]!=S[i]:
                    return False
                i+=1
            i-=1
            if i%len(s)==len(s)-1:
                return True
            return False
                
        if str1==str2:
            return str1
        if str1[0]!=str2[0]:
            return ''
        ans=''
        temp=''
        for i in range(min(len(str1),len(str2))):
            if str1[i]!=str2[i]:
                return ans
            temp+=str1[i]
            if isdiv(temp,str1) and isdiv(temp,str2):
                ans=temp
        return ans
            
                
        
        