class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        current_sum=0
        dic={}
        count=0
        for i in nums:
            current_sum+=i
            if current_sum==k:
                count+=1
            if current_sum-k in dic:
                count+=dic[current_sum-k]
            dic[current_sum]=dic.get(current_sum,0)+1
        return count