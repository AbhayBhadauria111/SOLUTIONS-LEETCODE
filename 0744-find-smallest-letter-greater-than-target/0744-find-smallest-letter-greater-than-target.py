class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        ans='z'
        f=1
        for i in letters:
            if i>target:
                ans=min(i,ans)
                f=0
        if f==1:
            return letters[0]
        return ans
        
        
        