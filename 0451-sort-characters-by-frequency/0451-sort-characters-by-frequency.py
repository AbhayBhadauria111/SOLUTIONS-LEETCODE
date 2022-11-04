class Solution:
    def frequencySort(self, s: str) -> str:
        A=[]
        s=dict(Counter(s))
        for i in s:
            heappush(A,[-s[i],i])
        s=''
        while(A):
            temp=heappop(A)
            s+=temp[1]*-temp[0]
        return s
        