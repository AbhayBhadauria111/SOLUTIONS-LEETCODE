class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>parent(edges.size()+1,0);
        for(int i=0;i<edges.size()+1;i++)parent[i]=i;
        for(auto edge:edges)
        {
            if(find(edge[0],parent)==find(edge[1],parent))return edge;
            else
            {
                // cout<<edge[0]<<" "<<edge[1]<<"---"<<find(edge[0],parent)<<" "<<find(edge[1],parent)<<endl;
                parent[parent[edge[1]]]=edge[0];
            }
        }
        return {-1,-1};
    }
private:
    int find(int u,vector<int>&parent)
    {
        if(parent[u]==u)return u;
        return parent[u]=find(parent[u],parent);
    }
};