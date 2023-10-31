class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        ans.push_back(pref[0]);
        int curr=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            ans.push_back(curr^pref[i]);
            curr=curr^ans[i];
        }
        return ans;
    }
};