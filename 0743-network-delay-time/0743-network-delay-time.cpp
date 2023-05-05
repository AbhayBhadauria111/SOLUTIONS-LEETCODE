class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     unordered_map<int,vector<pair<int,int>>>graph;
        for(auto x:times)
        {
            graph[x[0]].push_back(make_pair(x[2],x[1]));
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        vector<int>timetaken(n+1,INT_MAX);
        Q.push(make_pair(0,k));
        pair<int,int>curr;
        while(!Q.empty())
        {
            curr=Q.top();Q.pop();
            timetaken[curr.second]=min(curr.first,timetaken[curr.second]);
            for(auto x:graph[curr.second])
            {
                int currtime=curr.first+x.first;
                if(currtime<timetaken[x.second])
                {
                    Q.push(make_pair(currtime,x.second));
                }
            }
        }
        // for(auto x:timetaken)cout<<x<<" ";
        int ans= *max_element(timetaken.begin()+1,timetaken.end());
        return (ans==INT_MAX)?-1:ans; 
    }
};