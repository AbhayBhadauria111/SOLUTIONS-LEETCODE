class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int a=0;
        for(int i=1;i<=encoded.size()+1;i++)
            a=a^i;
        for(int i=1;i<encoded.size();i+=2)
        {
            a=a^encoded[i];
        }
        vector<int>ans;
        ans.push_back(a);
        for(auto x:encoded)ans.push_back(ans.back()^x);
        return ans;
    }
};