#User function Template for python3
class Solution:
    def isSumOfTwo (self, N):
        # code here 
        def prime(num):
            for i in range(2,int(num**0.5)+1):
                if num%i==0:
                    return False
            return True
        for i in range(N//2+1):
            if i!=2 and i%2==0 or (N-i)%2==0:
                continue
            if not prime(i):
                continue
            if not prime(N-i):
                continue
            return "Yes"
        return "No"
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.isSumOfTwo(N))
# } Driver Code Ends