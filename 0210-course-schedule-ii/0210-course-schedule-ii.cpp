class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>order;
        unordered_map<int,vector<int>>Graph;
        vector<int>req(numCourses,0);
        for(int i=0;i<prerequisites.size();i++)
        {
            Graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            req[prerequisites[i][0]]++;
        }
        queue<int>Q;
        for(int i=0;i<numCourses;i++)
            if(req[i]==0)
            {
                Q.push(i);
                order.push_back(i);
            }
        while(!Q.empty())
        {
            int curr=Q.front();Q.pop();
            for(auto x:Graph[curr])
            {
                req[x]--;
                if(req[x]==0)
                {
                    Q.push(x);
                    order.push_back(x);
                }
            }
        }
        for(auto x:req)if(x>0)return {};
        return order;
    }
};