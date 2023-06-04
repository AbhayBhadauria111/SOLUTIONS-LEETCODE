class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        vector<bool>vis(isConnected.size(),false);
        for(int i=0;i<isConnected.size();i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,vis,isConnected);
            }
        }
        return count;
    }
   private:
    void dfs(int curr,vector<bool>&vis,vector<vector<int>>isCon)
    {
        if(vis[curr])return;
        vis[curr]=true;
        for(int i=0;i<isCon.size();i++)
        {
            if(!vis[i] and isCon[curr][i])dfs(i,vis,isCon);
        }
    }
};