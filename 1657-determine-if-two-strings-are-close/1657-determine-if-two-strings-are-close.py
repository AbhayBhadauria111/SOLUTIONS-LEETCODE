class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if len(word1)!=len(word2):return False
        check=dict(Counter(word1))
        D=dict(Counter(word2))
        if sorted(check.keys())!=sorted(D.keys()):
            return False
        if sorted(check.values())!=sorted(D.values()):
            return False
        return True