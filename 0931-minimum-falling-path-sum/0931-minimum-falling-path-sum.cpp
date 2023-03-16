class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                if(i==0)temp.push_back(matrix[i][j]);
                else temp.push_back(-1);
            }
            ans.push_back(temp);
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a=INT_MAX,b=INT_MAX,c=INT_MAX;
                a=ans[i-1][j];
                if(j>0)b=ans[i-1][j-1];
                if(j<n-1)c=ans[i-1][j+1];
                ans[i][j]=matrix[i][j]+min(min(a,b),c);
            }
        }
        int A=INT_MAX;
        for(auto x:ans[n-1])A=min(A,x);
        return A;
    }
};