class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int i=0,j=0;
        unordered_map<int,int>D;
        priority_queue<int>heap;
        while(j-i+1<=k)
        {
            D[nums[j]]+=1;
            heap.push(nums[j]);
            j++;
        }
        ans.push_back(heap.top());
        while(j<nums.size())
        {
            D[nums[j]]+=1;
            D[nums[i]]-=1;
            i++;
            heap.push(nums[j]);
            j++;
            while(D[heap.top()]==0)
            {
                heap.pop();
            }
            ans.push_back(heap.top());
        }
        return ans;
    }
};