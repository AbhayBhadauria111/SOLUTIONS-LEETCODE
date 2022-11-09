class Solution:
    def maxPerformance(self, n: int, speed: List[int], efficiency: List[int], k: int) -> int:
        E=[]
        for i in range(n):
            E.append([efficiency[i],speed[i]])
        E.sort(reverse=True)
        Heap=[]
        Heap.append(E[0][1])
        S=E[0][1]
        ans=(E[0][0]*E[0][1])%(10**9+7)
        for i in range(1,n):
            if len(Heap)<k:
                heappush(Heap,E[i][1])
                S+=E[i][1]
                ans=max(S*E[i][0],ans)
            else:
                if E[i][1]>Heap[0]:
                    S-=Heap[0]
                    heappop(Heap)
                    heappush(Heap,E[i][1])
                    S+=E[i][1]
                    ans=max(ans,S*E[i][0])
        return ans%(10**9+7)
            
                    
                
        
        