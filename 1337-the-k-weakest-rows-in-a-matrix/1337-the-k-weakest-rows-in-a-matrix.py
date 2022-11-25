class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        A=[]
        for i in range(len(mat)):
            heappush(A,[mat[i].count(1),i])
        ans=[]
        while(k):
            k-=1
            ans.append(heappop(A)[1])
        return ans
            
        