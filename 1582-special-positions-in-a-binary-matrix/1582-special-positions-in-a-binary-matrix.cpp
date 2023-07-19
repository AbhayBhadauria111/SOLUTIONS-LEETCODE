class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>onescol(mat[0].size(),0),onesrow(mat.size(),0);
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    onescol[j]++;
                    onesrow[i]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1 and onesrow[i]==1 and onescol[j]==1)count++;
            }
        }
        return count;
        
    }
};