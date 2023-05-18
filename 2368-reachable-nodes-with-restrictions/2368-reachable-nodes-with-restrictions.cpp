class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
       queue<int>Q;
        unordered_set<int>res(restricted.begin(),restricted.end());
        int count=0;
        unordered_map<int,vector<int>>graph;
        for(auto x:edges)
        {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<bool>vis(n,0);
        Q.push(0);
        vis[0]=1;
        while(!Q.empty())
        {
            int curr=Q.front();Q.pop();
            count++;
            // cout<<curr<<" ";
            for(auto nbr:graph[curr])
            {
                if(vis[nbr]==0 and res.find(nbr)==res.end())
                Q.push(nbr);
                vis[nbr]=1;
            }
            
        }
        return count;
    }
};