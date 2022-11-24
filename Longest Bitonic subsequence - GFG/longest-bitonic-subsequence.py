#User function Template for python3

class Solution:
	def LongestBitonicSequence(self, nums):
		# Code here
		De=[1 for i in range(len(nums))]
		In=[1 for i in range(len(nums))]
		for i in range(1,len(nums)):
		    m=0
		    for j in range(i):
		        if nums[i]>nums[j]:
		            m=max(m,In[j])
		    In[i]=m+1
		for i in range(len(nums)-2,-1,-1):
		    m=0
		    for j in range(len(nums)-1,i-1,-1):
		        if nums[i]>nums[j]:
		            m=max(m,De[j])
		    De[i]=m+1
	    ans=0
	    for i in range(len(nums)):
	        ans=max(ans,In[i]+De[i]-1)
	    return ans
		        
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int, input().split()))
		ob = Solution()
		ans = ob.LongestBitonicSequence(nums)
		print(ans)
# } Driver Code Ends