class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        D=dict(Counter(words))
        D1={}
        for i in D:
            if D[i] in D1:
                D1[D[i]].append(i)
            else:
                D1[D[i]]=[i]
        A=sorted(D1.keys(),reverse=True)
        ans=[]
        for i in A:
            T=D1[i]
            T.sort()
            for j in T:
                ans.append(j)
                if len(ans)==k:
                    return ans
                
        