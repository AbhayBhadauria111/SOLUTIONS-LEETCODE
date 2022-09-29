from collections import Counter
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n=math.ceil(len(nums)/2)
        D=dict(Counter(nums))
        for i in D.keys():
            if D[i]>=n:
                return i
        