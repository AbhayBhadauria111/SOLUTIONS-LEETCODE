class Solution {
    int edgecount,vertices;
    
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                edgecount=0;
                vertices=0;
                DFS(i,vis,graph);
                if(edgecount>=(vertices*(vertices-1)))count++;
                // cout<<i<<" "<<edgecount<<" "<<vertices<<endl;
            }
        }
        return count;
    }
private:
    void DFS(int curr,vector<bool>&vis,unordered_map<int,vector<int>>&graph)
    {
        
        vis[curr]=1;
        edgecount+=graph[curr].size();
        vertices++;
        for(auto nbr:graph[curr])
        {
            if(!vis[nbr])DFS(nbr,vis,graph);
        }
        return ;
    }
};