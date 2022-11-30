class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        D=dict(Counter(arr))
        return len(set(D.values()))==len(D)
        