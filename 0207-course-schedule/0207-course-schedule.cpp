class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0)return true;
        unordered_map<int,vector<int>>Graph;
        vector<int>required(numCourses,0);
        for(int i=0;i<prerequisites.size();i++)
        {
            Graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            required[prerequisites[i][0]]++;
        }
        queue<int>Q;
        for(int i=0;i<numCourses;i++)
            if(required[i]==0)Q.push(i);
        
        if(Q.size()==0)return false;
        while(!Q.empty())
        {
            int curr=Q.front();Q.pop();
            for(auto x:Graph[curr])
            {
                required[x]--;
                if(required[x]==0)Q.push(x);
            }
        }
        for(auto x:required)if(x>0)return false;
        return true;
    }
};