#User function Template for python3

class Solution:	
	def wineSelling(self, arr, n):
	    s = 0
	    ans = []
	    for i in range(n):
	        s += arr[i]
	        ans.append(s)
	    s = 0
	    for i in ans:
	        s += abs(i)
	    return s

#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__=='__main__':
    t = int(input())
    for i in range(t):
        N = int(input())
        Arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.wineSelling(Arr,N)
        
        print(ans)

# } Driver Code Ends