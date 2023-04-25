class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>parent(edges.size()+1,0);
        for(int i=0;i<edges.size()+1;i++)parent[i]=i;
        for(auto edge:edges)
        {
            int u=find(edge[0],parent);
            int v=find(edge[1],parent);
            if(u==v)return edge;
            else
            {
                parent[u]=v;
            }
        }
        return {-1,-1};
    }
private:
    int find(int u,vector<int>&parent)
    {
        if(parent[u]==u)return u;
        return find(parent[u],parent);
    }
};