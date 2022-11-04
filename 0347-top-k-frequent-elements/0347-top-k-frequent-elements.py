class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        A=[]
        D={}
        for i in nums:
            D[i]=D.get(i,0)+1
        for i in D:
            heappush(A,[-D[i],i])
        ans=[]
        for i in range(k):
            ans.append(heappop(A)[1])
        return ans
            
            
                
                