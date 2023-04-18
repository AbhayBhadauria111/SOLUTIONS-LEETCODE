class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(auto x:nums1)
        {
            for(auto y:nums2)
                if(x==y)return x;
        }
        return min(nums1[0]*10+nums2[0],nums2[0]*10+nums1[0]);
        
    }
};