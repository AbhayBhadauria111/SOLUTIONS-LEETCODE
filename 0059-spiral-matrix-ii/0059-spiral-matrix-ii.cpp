class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        int curr=1;
        int count=0;
        int r=0,c=0,last=n*n;
        
        while(curr<=last)
        {
            for(int i=c;i<n;i++)
            {
                mat[r][i]=curr;
                curr++;
            }
            if(curr>last)break;
            for(int i=r+1;i<n;i++)
            {
                mat[i][n-1]=curr;
                curr++;
            }
            if(curr>last)break;
            for(int i=n-2;i>=c;i--)
            {
                mat[n-1][i]=curr;curr++;
            }
            if(curr>last)break;
            for(int i=n-2;i>r;i--)
            {
                mat[i][c]=curr;curr++;
            }
            if(curr>last)break;
            n--;
            c++;
            r++;
        }
        return mat;
        
    }
};