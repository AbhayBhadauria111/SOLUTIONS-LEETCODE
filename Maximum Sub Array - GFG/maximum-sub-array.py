#User function Template for python3

class Solution:

	def findSubarray(self,a, n):
    	# code here
    	i=j=0
    	ans=[0,0]
    	anssum=-1
    	temp=0
    	while(j<n):
    	    if a[j]<0:
    	        i=j+1
    	        temp=0
    	        j+=1
    	        continue
    	    temp+=a[j]
    	    if temp>=anssum:
    	        if temp==anssum:
        	        if j-i+1>ans[1]-ans[0]+1:
        	            ans[0]=i
        	            ans[1]=j
        	    else:
        	        ans[0]=i
        	        ans[1]=j
        	    anssum=temp
        	j+=1
        if anssum==-1:
            return [-1]
        	
        return a[ans[0]:ans[1]+1]
        	        
    	    
    	    
    	        
    	    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

	tc=int(input())
	while tc > 0:
	    n=int(input())
	    a=list(map(int, input().strip().split()))
	    ob = Solution()
	    ans=ob.findSubarray(a, n)
	    for x in ans:
	        print(x, end=" ")
	    print()
	    tc=tc-1
# } Driver Code Ends