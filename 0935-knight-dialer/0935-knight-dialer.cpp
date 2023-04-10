class Solution {
public:
    int knightDialer(int n) {
        vector<vector<int>>DP(n+1,vector<int>(11,0));
        unordered_map<int,vector<int>>graph={
            {0,{4,6}},
            {1,{6,8}},
            {2,{7,9}},
            {3,{4,8}},
            {4,{3,9,0}},
            {5,{}},
            {6,{1,0,7}},
            {7,{2,6}},
            {8,{1,3}},
            {9,{2,4}}
        };
        for(int i=0;i<11;i++)DP[1][i]=1;
        for(int i=2;i<DP.size();i++)
        {
            int temp=0;
         for(int j=0;j<11;j++)
         {
             temp=0;
             for(int x:graph[j])temp=(temp+DP[i-1][x])%(1000000000+7);
             DP[i][j]=temp;
         }
        }
        int ans=0;
        for(int i=0;i<10;i++)ans=(ans+DP[n][i])%(1000000000+7);
        return ans;
    }
};