class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int x:nums)
        {
            stack<int>temp;
            while(x!=0)
            {
                temp.push(x%10);
                x/=10;
            }
            while(!temp.empty())
            {
                ans.push_back(temp.top());temp.pop();
            }
        }
        return ans;
    }
};