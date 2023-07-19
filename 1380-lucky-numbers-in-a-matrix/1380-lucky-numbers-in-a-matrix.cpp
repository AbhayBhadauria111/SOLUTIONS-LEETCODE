class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
     vector<int>minrow(matrix.size(),INT_MAX),maxcol(matrix[0].size(),INT_MIN),ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                minrow[i]=min(matrix[i][j],minrow[i]);
                maxcol[j]=max(matrix[i][j],maxcol[j]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==minrow[i] && matrix[i][j]==maxcol[j])ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};