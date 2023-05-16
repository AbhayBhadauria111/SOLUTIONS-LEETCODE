class Solution {
        map<pair<int,int>,int>DP;
public:
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        DP.clear();
        int ans=solve(0,0,amount,coins);
        return ans;
    }
private:
    int solve(int curr,int prev,int amount,vector<int>&coins)
    {
        if(curr>amount)return 0;
        if(curr==amount)return 1;
        if(DP.find(make_pair(curr,prev))!=DP.end())return DP[make_pair(curr,prev)];
        int temp=0;
        for(int i=prev;i<coins.size();i++)
        {
            if((coins[i]+curr)>amount)break;
            temp+=solve(curr+coins[i],i,amount,coins);
        }
        return DP[make_pair(curr,prev)]=temp;
    }
};