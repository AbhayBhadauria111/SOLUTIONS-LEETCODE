class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(auto x:queries)
        {
            for(int i=x[0];i<=x[2];i++)
            {
                ans[i][x[1]]+=1;
                if(x[3]>=n-1)continue;
                ans[i][x[3]+1]-=1;
            }
        }
        // for(auto x:ans)
        // {
        //     for(auto y:x)cout<<y<<" ";
        //     cout<<endl;
        // }
        // cout<<"---------------------------"<<endl;
        int temp;
        for(int i=0;i<n;i++)
        {
            temp=0;
            for(int j=0;j<n;j++)
            {
                temp+=ans[i][j];
                ans[i][j]=temp;
            }
        }
        // for(auto x:ans)
        // {
        //     for(auto y:x)cout<<y<<" ";
        //     cout<<endl;
        // }
        return ans;
    }
};