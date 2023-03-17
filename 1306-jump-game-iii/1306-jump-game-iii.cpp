class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>Q;
        unordered_set<int>visited;
        Q.push(start);
        while(!Q.empty())
        {
        int curr=Q.front();Q.pop();
            
        if(arr[curr]==0)return true;
            if(curr-arr[curr] >=0 and curr-arr[curr]<arr.size() and visited.find(curr-arr[curr])==visited.end())
            {
                Q.push(curr-arr[curr]);
                visited.insert(curr-arr[curr]);
            }
            if(curr+arr[curr]>=0 and curr+arr[curr]<arr.size() and visited.find(curr+arr[curr])==visited.end())
            {
                Q.push(curr+arr[curr]);
                visited.insert(curr+arr[curr]);
            }
            
        }
        return false;
    }
};