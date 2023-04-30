class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>D;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                D[mat[i][j]]={i,j};
            }
        }
        vector<int>row(n,0);
        vector<int>col(m,0);
        for(int i=0;i<arr.size();i++)
        {
            int currcol=D[arr[i]][1];
            int currrow=D[arr[i]][0];
            row[currrow]++;
            col[currcol]++;
            // for(auto x:row)cout<<x<<" ";cout<<endl;
            // for(auto x:col)cout<<x<<" ";cout<<endl;
            if(row[currrow]==m or col[currcol]==n)return i;
        }
        return -1;
    }
};