class Solution {
public:
//     USING DISJOINT SET
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>parent(isConnected.size(),0);
        vector<int>rank(isConnected.size(),0);
        for(int i=0;i<isConnected.size();i++)
            parent[i]=i;
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    int u=find(i,parent);
                    int v=find(j,parent);
                    if(u!=v)
                    {
                        if(rank[u]>rank[v])
                        {
                            parent[v]=u;
                        }
                        else if(rank[v]>rank[u])
                        {
                            parent[u]=v;
                        }
                        else
                        {
                         parent[v]=u;
                        rank[u]++;
                        }
                    }
                }
            }
        }
        for(int i=0;i<parent.size();i++)parent[i]=find(i,parent);
        unordered_set<int>S(parent.begin(),parent.end());
        return S.size();
    }
private:
    int find(int node,vector<int>&parent)
    {
        if(parent[node]==node)return node;
        else return parent[node]=find(parent[node],parent);
    }
};