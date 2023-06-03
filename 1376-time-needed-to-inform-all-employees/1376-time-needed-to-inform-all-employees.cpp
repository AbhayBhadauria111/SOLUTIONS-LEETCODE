class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<n;i++)
        {
            graph[manager[i]].push_back(i);
        }
        int ans=0;
        queue<pair<int,int>>Q;
        Q.push({headID,0});
        while(!Q.empty())
        {
            pair<int,int>curr=Q.front();Q.pop();
            ans=max(ans,curr.second);
            for(int x:graph[curr.first])
            {
                Q.push({x,curr.second+informTime[curr.first]});
            }
        }
        return ans;
    }
};