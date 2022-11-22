class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        heap=[]
        ans=[]
        ws=we=0
        while(we<len(nums)):
            heappush(heap,[-nums[we],we])
            if we>=k-1:
                while(True):
                    temp=heap[0]
                    if temp[1]>=ws:
                        ans.append(-temp[0])
                        break
                    else:
                        heappop(heap)
                ws+=1
            we+=1
        return ans
                
                
            
            
            