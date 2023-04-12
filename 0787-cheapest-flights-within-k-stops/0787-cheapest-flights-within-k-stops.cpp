class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int,vector<pair<int,int>>>graph;
        for(int i=0;i<flights.size();i++)
        {
            graph[flights[i][0]].push_back(make_pair(flights[i][1],flights[i][2]));
        }
        vector<int>Dist(n,INT_MAX);
        queue<vector<int>>Q;
        Q.push({0,src,0});
        vector<int>curr;
        while(!Q.empty())
        {
            curr=Q.front();Q.pop();
            int currstop=curr[1];
            int currdist=curr[2];
            int numstops=curr[0];
            if(numstops>k)continue;
            for(auto x:graph[currstop])
            {
                if(currdist+x.second<Dist[x.first] && numstops<=k)
               {
                   Dist[x.first]=currdist+x.second;
                    Q.push({numstops+1,x.first,currdist+x.second});
               }
            }
            
        }
        if(Dist[dst]==INT_MAX)return -1;
        return Dist[dst];
    }
};