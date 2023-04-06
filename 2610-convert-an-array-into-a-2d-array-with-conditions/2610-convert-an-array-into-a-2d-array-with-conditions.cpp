class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
     unordered_map<int,int>D;
    for(int x:nums)D[x]++;
    vector<vector<int>>ans;
        int count=0;
        while(count<nums.size())
        {
            vector<int>temp;
            for(auto &x:D)
            {
               if(x.second>0){temp.push_back(x.first);D[x.first]--;count++;}
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};