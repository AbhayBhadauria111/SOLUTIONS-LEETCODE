class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        unordered_map<int,vector<int>>G;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                G[i].push_back(graph[i][j]);
                G[graph[i][j]].push_back(i);
            }
        }
        vector<int>color(n,-1);
        queue<int>Q;
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                Q.push(i);
                color[i]=0;
                while(!Q.empty())
                {
                    int curr=Q.front();Q.pop();
                    for(auto nbr:G[curr])
                    {
                        if(color[nbr]==color[curr])return false;
                        if(color[nbr]==-1)
                        {
                        color[nbr]=(color[curr]+1)%2;
                        Q.push(nbr);
                        }
                    }
                }
            }
        }
        return true;
    }
};