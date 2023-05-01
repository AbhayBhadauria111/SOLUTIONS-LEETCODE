class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=nums[0].size();
        vector<int>ans;
        for(auto query:queries)
        {
            vector<pair<string,int>>A;
            for(int i=0;i<n;i++)
            {
                string temp=nums[i].substr(m-query[1],query[1]);
                A.push_back(make_pair(temp,i));
            }
            sort(A.begin(),A.end());
            ans.push_back(A[query[0]-1].second);
        }
        return ans;
    }
};