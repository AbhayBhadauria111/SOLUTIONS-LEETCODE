#User function Template for python3
import heapq
class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        Arr=[]
        for i in range(n):
            Arr.append([arr[i],dep[i]])
        Arr.sort()
        # code here
        Heap=[]
        heapq.heappush(Heap,Arr[0][1])
        for i in range(1,n):
            if Heap[0]<Arr[i][0]:
                heapq.heappop(Heap)
                heapq.heappush(Heap,Arr[i][1])
            else:
                heapq.heappush(Heap,Arr[i][1])
        return len(Heap)
            
            
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        arrival = list(map(int, input().strip().split()))
        departure = list(map(int, input().strip().split()))
        ob=Solution()
        print(ob.minimumPlatform(n,arrival,departure))
# } Driver Code Ends