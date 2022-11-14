#User function Template for python3
class Solution:
    def numberOfSubsequences (self,S,W):
        # code here 
        ans=0
        check=set()
        def sub(S,W,check):
            i=j=0
            while i in check:
                i+=1
            while(i<len(S) and j<len(W)):
                while i in check:
                    i+=1
                if i<len(S) and S[i]==W[j]:
                    check.add(i)
                    i+=1
                    j+=1
                    
                else:
                    i+=1
            if j==len(W):
                return True
            return False
        while(sub(S,W,check)):
            ans+=1
        return ans
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        S=str(input())
        W=str(input())

        ob = Solution()
        print(ob.numberOfSubsequences(S,W))

# } Driver Code Ends