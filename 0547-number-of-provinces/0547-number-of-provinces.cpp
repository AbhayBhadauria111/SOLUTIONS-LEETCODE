class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>visited(isConnected.size(),false);
        int count=0;
        for(int i=0;i<isConnected.size();i++)
        {
            if(!visited[i])
            {
                visit(i,isConnected,visited);
                count++;
            }
        }
        return count;
    }
private:
    void visit(int i,vector<vector<int>>&graph,vector<bool>&visited)
    {
        visited[i]=true;
        for(int j=0;j<graph.size();j++)
        {
            if(graph[i][j]==1 and visited[j]==false)visit(j,graph,visited);
        }
    }
};