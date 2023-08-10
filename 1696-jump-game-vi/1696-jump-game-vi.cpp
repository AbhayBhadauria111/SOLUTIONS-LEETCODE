class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>DP(n,INT_MIN);
        DP[n-1]=nums[n-1];
        priority_queue<pair<int,int>>heap;
        heap.push({nums[n-1],n-1});
        for(int i=n-2;i>=0;i--)
        {
            while(heap.top().second>i+k)heap.pop();
            DP[i]=nums[i]+heap.top().first;
            heap.push({DP[i],i});
        }
        return DP[0];
    }
};