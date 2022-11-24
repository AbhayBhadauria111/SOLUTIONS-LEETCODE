class Solution:
    def kthLargestNumber(self, nums: List[str], k: int) -> str:
        A=[]
        for i in nums:
            if len(A)<k:
                heappush(A,int(i))
            else:
                if A[0]<int(i):
                    heappop(A)
                    heappush(A,int(i))
        return str(A[0])
        