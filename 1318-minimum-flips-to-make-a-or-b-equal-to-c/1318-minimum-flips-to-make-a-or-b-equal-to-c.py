class Solution:
    def minFlips(self, a: int, b: int, c: int) -> int:
        a=bin(a)[2:]
        b=bin(b)[2:]
        c=bin(c)[2:]
        l=max(len(a),len(b),len(c))
        while(len(a)<l):
            a='0'+a
        while(len(b)<l):
            b='0'+b
        while(len(c)<l):
            c='0'+c
        i=0
        count=0
        while(i<len(a)):
            if c[i]=='0':
                if a[i]=='1':
                    count+=1
                if b[i]=='1':
                    count+=1
            else:
                if a[i]!='1' and b[i]!='1':
                    count+=1
            i+=1
        return count