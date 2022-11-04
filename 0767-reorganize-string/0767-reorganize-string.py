class Solution:
    def reorganizeString(self, s: str) -> str:
        if len(s)<3:
            return s
        D=dict(Counter(s))
        heap=[]
        ans=''
        for i in D:
            heappush(heap,[-D[i],i])
        while(len(heap)>1):
            a=heappop(heap)
            b=heappop(heap)
            ans+=a[1]+b[1]
            a[0]+=1
            b[0]+=1
            if a[0]!=0:
                heappush(heap,a)
            if b[0]!=0:
                heappush(heap,b)
        if len(heap)==1:
            if heap[0][0]==-1:
                ans+=heap[0][1]
                return ans
            else:
                return ''
        return ans
            
                    
                
            
            
        
        
        