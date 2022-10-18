#User function Template for python3

def downwardDigonal(N, A): 
    # code here 
    ans=[]
    for k in range(N):
        i=0
        j=k
        while(j>=0):
            ans.append(A[i][j])
            j-=1
            i+=1
    for k in range(1,N):
        i=k
        j=N-1
        while(i<N):
            ans.append(A[i][j])
            i+=1
            j-=1
    return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        matrix =[]
        for i in range(n):
            row = list(map(int, input().strip().split()))
            matrix.append(row)
        ans = downwardDigonal(n,matrix)
        for i in ans:
            print(i,end=" ")
        print()

# } Driver Code Ends