class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<2)return n;
        vector<int>A(n+1,0);
        int ans=0;
        A[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                A[i]=A[i/2];
            }
            else
            {
                A[i]=A[(i-1)/2]+A[(i-1)/2 +1];
            }
            ans=max(ans,A[i]);
        }
        return ans;
        
    }

};