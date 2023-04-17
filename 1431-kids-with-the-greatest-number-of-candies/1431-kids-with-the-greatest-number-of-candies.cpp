class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=*max_element(candies.begin(),candies.end());
        vector<bool>ans;
        for(auto x:candies)
        {
            if(x+extraCandies>=m)ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};