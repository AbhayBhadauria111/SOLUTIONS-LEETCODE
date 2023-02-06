class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       unordered_map<int,int> TrustCount;
        vector<int> judgeexist(n,1);
        for(auto x:trust)
        {
            if(TrustCount.find(x[1])==TrustCount.end())TrustCount[x[1]]=1;
            else TrustCount[x[1]]++;
            if(x[0]!=x[1])judgeexist[x[0]-1]=0;
        }
        for(int i=1;i<n+1;i++)
        {
            if (judgeexist[i-1]==1 and TrustCount[i]==n-1)return i;
        }
        return -1;
    }
};