class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0,j=0;
        int sum=0;
        int n=mat.size();
        while(i<n and j<n)
        {
            sum+=mat[i][j];
            i++;j++;
        }
        i=0;j=n-1;
        while(i<n and j>=0)
        {
            if(i!=j)
            sum+=mat[i][j];
            i++;
            j--;
        }
        return sum;
    }
};