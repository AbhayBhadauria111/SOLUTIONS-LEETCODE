class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        D={}
        for i in licensePlate:
            if i.isalpha():
                D[i.lower()]=D.get(i.lower(),0)+1
        ans=''
        for i in words:
            T=dict(Counter(i))
            f=0
            for j in D:
                if T.get(j,0)>=D[j]:
                    continue
                f=1
            if f==0:
                if ans=='':
                    ans=i
                else:
                    if len(ans)>len(i):
                        ans=i
        return ans
                
                    
        