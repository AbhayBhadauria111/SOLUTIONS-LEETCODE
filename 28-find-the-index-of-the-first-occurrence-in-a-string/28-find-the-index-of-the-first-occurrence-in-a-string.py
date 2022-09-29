class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        ws=0
        we=len(needle)-1
        while(we<len(haystack)):
            if haystack[ws:we+1]==needle:
                return ws
            we+=1
            ws+=1
        return -1