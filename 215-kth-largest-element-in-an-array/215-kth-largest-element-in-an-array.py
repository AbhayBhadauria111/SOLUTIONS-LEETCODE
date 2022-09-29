class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        
        heap = nums[:k]
        heapify(heap)
        for n in nums[k:]:
            heappushpop(heap, n)
        return heap[0]