class Solution {
    int solve(int ind,vector<vector<int>>& pairs, unordered_map<int,int>&DP)
    {
        if(ind==pairs.size())return 0;
        else
        {
            if(DP.find(ind)!=DP.end())return DP[ind];
            int temp=0;
            for(int i=ind+1;i<pairs.size();i++)
            {
                if(pairs[i][0]>pairs[ind][1])temp=max(temp,solve(i,pairs,DP));
            }
            return DP[ind]=temp+1;
        }
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int ans=0;
        unordered_map<int,int>DP;
        for(int i=0;i<pairs.size();i++)
        {
            ans=max(ans,solve(i,pairs,DP));
        }
        return ans;
    }
};