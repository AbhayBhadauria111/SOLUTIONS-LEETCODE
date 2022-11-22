#User function Template for python3
import heapq as H
class Solution:
    def countTriplets(self, A):
        ans=0
        for i in range(1,len(A)-1):
            small=large=0
            for j in range(i):
                if A[j]<A[i]:
                    small+=1
            for j in range(i+1,len(A)):
                if A[j]>A[i]:
                    large+=1
            ans+=small*large
        return ans
            
            
    	        
    	    
    	    
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int,input().split()))
		ob = Solution()
		ans = ob.countTriplets(nums)
		print(ans)

# } Driver Code Ends