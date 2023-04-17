class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>heap;
        for(int i=0;i<nums.size();i++)heap.push(make_pair(nums[i],i));
        vector<bool>visited(nums.size(),false);
        int visitcount=0;
        while(!heap.empty())
        {
            pair<int,int>curr=heap.top();heap.pop();
            if(visited[curr.second]==true)continue;
            ans+=curr.first;
            if(visited[curr.second]==false){visitcount++;visited[curr.second]=true;}
            if(curr.second>0 and visited[curr.second-1]==false){visitcount++;visited[curr.second-1]=true;}
            if(curr.second<nums.size()-1 and visited[curr.second+1]==false){visitcount++;visited[curr.second+1]=true;}
            if(visitcount>=nums.size())break;
        }
        return ans;
    }
};