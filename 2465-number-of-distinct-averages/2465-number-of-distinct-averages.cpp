class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<float>S;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            S.insert((nums[i]+nums[j])/2.0);
            i+=1;
            j-=1;
        }
        return S.size();
    }
};