class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        for(int x=0;x<encoded.size();x++){
            ans.push_back(encoded[x]^ans[x]);
        }
        return ans;
        
    }
};