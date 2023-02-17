class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        map<int,vector<int>>dict;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(dict.find(nums[i])==dict.end())dict[nums[i]]={i};
            else
            {
               for(auto j:dict[nums[i]])if(i*j%k==0)ans++;
                dict[nums[i]].push_back(i);
            }
            
        }
        return ans;
    }
};