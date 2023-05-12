//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        unordered_map<int,vector<pair<int,int>>>graph;
        for(int i=0;i<V;i++)
        {
            for(vector<int>edge:adj[i])
            {
                graph[i].push_back(make_pair(edge[1],edge[0]));
            }
        }
        vector<int>D(V,10e9);
        priority_queue<int,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        Q.push(make_pair(0,S));
        while(!Q.empty())
        {
            pair<int,int>curr=Q.top();Q.pop();
            D[curr.second]=min(D[curr.second],curr.first);
            for(auto x:graph[curr.second])
            {
                if(D[curr.second]+x.first<D[x.second])
                {
                    Q.push(make_pair(D[curr.second]+x.first,x.second));
                }
            }
            
        }
        return D;
        
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends