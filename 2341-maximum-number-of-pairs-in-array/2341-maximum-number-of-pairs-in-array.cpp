class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>count;
        for(int x:nums)
        {
            if(count.find(x)==count.end())count[x]=1;
            else count[x]++;
        }
        vector<int> ans={0,0};
        for(auto x:count)
        {
            ans[0]+=x.second/2;
            ans[1]+=x.second%2;
        }
        return ans;
    }
};