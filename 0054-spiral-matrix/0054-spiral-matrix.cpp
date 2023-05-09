class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i,j;
        vector<int>ans;
        int n=matrix.size(),m=matrix[0].size(),sr=0,sc=0;
        int  t=n*m;
        int count=0;
        while(count<t)
        {
            for(int j=sc;j<m;j++)
            {ans.push_back(matrix[sr][j]);count++;}
            if(count>=t)break;
            for(int j=sr+1;j<n;j++)
            {ans.push_back(matrix[j][m-1]);count++;}
            sr++;
            if(count>=t)break;
            for(int j=m-2;j>=sc;j--)
            {ans.push_back(matrix[n-1][j]);count++;}
            if(count>=t)break;
            for(int j=n-2;j>=sr;j--)
            {ans.push_back(matrix[j][sc]);count++;}
            n--;m--;
            sc++;
        }
        // cout<<endl;
        // for(auto x:ans)cout<<x<<" ";
        // cout<<endl;
        return ans;
    }
};