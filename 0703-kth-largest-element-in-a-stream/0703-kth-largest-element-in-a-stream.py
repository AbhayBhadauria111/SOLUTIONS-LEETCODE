class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.k=k
        self.A=[]
        for i in nums:
            if len(self.A)<k:
                heappush(self.A,i)
            else:
                if self.A[0]<i:
                    heappop(self.A)
                    heappush(self.A,i)
        

    def add(self, val: int) -> int:
        if len(self.A)<self.k:
            heappush(self.A,val)
        elif self.A[0]<val:
            heappop(self.A)
            heappush(self.A,val)
        return self.A[0]
        
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)