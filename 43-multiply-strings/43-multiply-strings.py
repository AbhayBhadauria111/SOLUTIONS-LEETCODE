class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1=='0' or num2=='0':
            return '0'
        elif num1=='1':
            return num2
        elif num2=='1':
            return num1
        N1=0
        j=0
        for i in reversed(num1):
            N1+=(ord(i)-ord('0'))*(10**j)
            j+=1
        j=0
        N2=0

        for i in reversed(num2):
            N2+=(ord(i)-ord('0'))*(10**j)
            j+=1
        return str(N1*N2)
            