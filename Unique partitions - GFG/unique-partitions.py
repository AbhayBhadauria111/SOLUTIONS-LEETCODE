#User function Template for python3

class Solution:
    def UniquePartitions(self, n):
 # Code here
        a=[]
        for j in range(1,n+1):
            a.append(j)
        a=a[::-1]
        ans=[]
        def sub(i,s,su):
            if(s==n):
                ans.append(su.copy())
                return
            if(i>=n or s>n):
                return
            su.append(a[i])
            sub(i,s+a[i],su)
            su.pop()
            sub(i+1,s,su)
        sub(0,0,[])
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n= int(input())
		ob = Solution()
		ans = ob.UniquePartitions(n)
		for a in ans:
			for b in a:
				print(b, end = " ")
		print()

# } Driver Code Ends