class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        A=[]
        last=0
        temp=''
        for i in s:
            if i==' ':
                last=1
                if len(temp)!=0:
                    A.append(temp)
                temp=''
            else:
                temp+=i
                last=0
        if last==0:
            A.append(temp)

        return len(A[-1])
                
            