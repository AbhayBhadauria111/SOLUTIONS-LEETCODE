class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int>heap(nums.begin(),nums.end());
        int temp;
        while(k)
        {
            k--;
            temp=heap.top();heap.pop();
            ans+=temp;
            heap.push(ceil(temp/3.0));
        }
        return ans;
    }
};