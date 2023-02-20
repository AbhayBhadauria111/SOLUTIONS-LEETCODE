class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        D=dict()
        ans=[]
        for i in words:
            D[i]=dict(Counter(i))
        for i in D[words[0]]:
            temp=D[words[0]][i]
            for j in D:
                temp=min(temp,D[j].get(i,0))
            while(temp):
                temp-=1
                ans.append(i)
        return ans
                