class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> check;
        vector<int>ans;
        for(int x:nums)
        {
            if(check.find(x)!=check.end())ans.push_back(x);
            check.insert(x);
            
        }
        return ans;
    }
};