class NumMatrix {
    vector<vector<int>>prefixsum;
    int n,m;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        prefixsum.resize(n,vector<int>(m,0));
        prefixsum[0][0]=matrix[0][0];
        for(int i=1;i<n;i++)prefixsum[i][0]=prefixsum[i-1][0]+matrix[i][0];
        for(int j=1;j<m;j++)prefixsum[0][j]=prefixsum[0][j-1]+matrix[0][j];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                prefixsum[i][j]=prefixsum[i][j-1]+prefixsum[i-1][j]-prefixsum[i-1][j-1]+matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=prefixsum[row2][col2];
        if(row1>0)ans-=prefixsum[row1-1][col2];
        if(col1>0)ans-=prefixsum[row2][col1-1];
        if(row1>0 and col1>0)ans+=prefixsum[row1-1][col1-1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */