class Solution:
    def reverseWords(self, s: str) -> str:
        S=s.split()
        s=''
        for i in reversed(S):
            s+=i+' '
        return s[:-1]