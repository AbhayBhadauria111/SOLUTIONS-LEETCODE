class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        else:
            s=str(x)
            if len(s)==1:
                return True
            else:
                s=s[::-1]
                s=int(s)
                if s!=x:
                    return False
                else:
                    return True
        