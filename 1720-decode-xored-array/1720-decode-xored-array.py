class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        ans=[]
        ans.append(first)
        for i in encoded:
            ans.append(ans[-1]^i)
        return ans
        