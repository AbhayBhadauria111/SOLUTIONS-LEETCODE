class Solution {
    unordered_map<int,int>DP;
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        DP.clear();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,reach_parent(manager,informTime,i));
        }
        return ans;
    }
private:
    int reach_parent(vector<int>& manager, vector<int>& informTime,int curr)
    {
        if(manager[curr]==-1)return 0;
        if(DP[curr]!=0)return DP[curr];
        else return DP[curr]=informTime[manager[curr]]+reach_parent(manager,informTime,manager[curr]);
    }
};