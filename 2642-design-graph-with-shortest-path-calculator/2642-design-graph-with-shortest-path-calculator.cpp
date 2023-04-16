class Graph {
public:
    unordered_map<int,vector<pair<int,int>>>G;
    int size;
    Graph(int n, vector<vector<int>>& edges) {
        size=n;
        for(int i=0;i<edges.size();i++)
        {
            G[edges[i][0]].push_back(make_pair(edges[i][2],edges[i][1]));
        }
    }
    
    void addEdge(vector<int> edge) {
        G[edge[0]].push_back(make_pair(edge[2],edge[1]));
    }
    
    int shortestPath(int node1, int node2) {
        if(node1==node2)return 0;
        vector<int>Dist(size,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        Q.push(make_pair(0,node1));
        while(!Q.empty())
        {
         pair<int,int>curr=Q.top();Q.pop();
         for(auto x:G[curr.second])
         {
             int currdist=curr.first+x.first;
             int currloc=x.second;
             if(currdist<Dist[currloc])
             {
                 Dist[currloc]=currdist;
                 Q.push(make_pair(currdist,currloc));
             }
         }
        }
        if(Dist[node2]!=INT_MAX)return Dist[node2];
        return -1;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */