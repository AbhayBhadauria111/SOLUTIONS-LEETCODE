class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>Ans;
        vector<vector<int>>temp;
        for(int i=0;i<mat[0].size();i++)
        {
            int j=i,k=0;
            vector<int>t;
            while(k<mat.size() and j>=0)
            {
                t.push_back(mat[k][j]);
                j--;k++;
            }
            temp.push_back(t);
        }
        for(int i=1;i<mat.size();i++)
        {
            int k=i,j=mat[0].size()-1;
            vector<int>t;
            while(k<mat.size() and j>=0)
            {
               t.push_back(mat[k][j]);
                j--;k++; 
            }
            temp.push_back(t);
        }
        for(int i=0;i<temp.size();i++)
        {
            if(i%2!=0)
            {
                for(int j=0;j<temp[i].size();j++)Ans.push_back(temp[i][j]);
            }
            else
            {
                for(int j=temp[i].size()-1;j>=0;j--)Ans.push_back(temp[i][j]);
            }
        }
        return Ans;
    }
};