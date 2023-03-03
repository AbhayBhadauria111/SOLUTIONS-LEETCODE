class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>ban(banned.begin(),banned.end());
        int currsum=0;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(currsum+i<=maxSum and ban.find(i)==ban.end())
            {
                ans++;
                currsum+=i;
            }
        }
        return ans;
        
    }
};