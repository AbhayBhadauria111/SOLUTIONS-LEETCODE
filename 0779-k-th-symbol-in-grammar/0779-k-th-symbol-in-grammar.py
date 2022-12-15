class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        def solve(n,k):
            if n==1 or k==1:
                return 0
            else:
                if k>2**(n-2):
                    a=solve(n-1,k-2**(n-2))
                    if a==0:
                        return 1
                    else:
                        return 0
                else:
                    return solve(n-1,k)
        return solve(n,k)
    