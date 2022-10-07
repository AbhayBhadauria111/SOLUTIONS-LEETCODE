class Solution:
    def maximumSwap(self, num: int) -> int:
        num=str(num)
        L=list(num)
        f=0
        c=0
        for i in range(len(L)-1):
            m=-1
            for j in range(i+1,len(L)):
                if L[i]<L[j]:
                    if m==-1:
                        m=j
                    elif L[m]<=L[j]:
                        m=j
            if m!=-1:
                L[i],L[m]=L[m],L[i]
                f+=1
            print(L)
            if f==1:
                break
        return int(''.join(L))
