class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
     vector<vector<int>>ans(2);
        unordered_set<int>n1(nums1.begin(),nums1.end());
        unordered_set<int>n2(nums2.begin(),nums2.end());
        for(auto x:nums1)
        {
            if(n2.find(x)==n2.end()){ans[0].push_back(x);n2.insert(x);}
        }
        for(auto x:nums2)
        {
            if(n1.find(x)==n1.end()){ans[1].push_back(x);n1.insert(x);}
        }
        return ans;
        
    }
};