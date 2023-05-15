//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<bool>visited(V,0);
        stack<int>S;
        DFS(0,adj,S,visited);
        for(int i=0;i<V;i++)
        {
            if(visited[i]==0)
            {
              DFS(i,adj,S,visited);  
            }
        }
        // cout<<S.size()<<endl;
        vector<vector<int>>newadj(V,vector<int>(0));
        for(int i=0;i<adj.size();i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                newadj[adj[i][j]].push_back(i);
            }
        }
        int count=0;
        for(int i=0;i<V;i++)visited[i]=0;
        
        stack<int>temp;
        while(!S.empty())
        {
            int curr=S.top();S.pop();
            if(!visited[curr])
            {
                count++;
                DFS(curr,newadj,temp,visited);
            }
        }
        return count;
    }
private:
    void DFS(int curr,vector<vector<int>>& adj,stack<int>&S,vector<bool>&visited)
    {
        visited[curr]=1;
        for(int i=0;i<adj[curr].size();i++)
        {
            if(visited[adj[curr][i]]==0)
            {
                // cout<<adj[curr][i]<<endl;
                visited[adj[curr][i]]=1;
                DFS(adj[curr][i],adj,S,visited);
            }
        }
        S.push(curr);
        return;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends