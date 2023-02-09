class Solution {
public:
    void joinprovince(vector<vector<int>>& isConnected,vector<int> &visited,int start)
    {
        int n=isConnected[0].size();
        visited[start]=true;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false and isConnected[start][i]==1)
            {
                visited[i]=true;
                joinprovince(isConnected,visited,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> visited(n,false);
        int count=0;
        for(int start=0;start<n;start++)
        {
            if(visited[start]==false)
            {
                count++;
                joinprovince(isConnected,visited,start);
            }
        }
        return count;
        
    }
};