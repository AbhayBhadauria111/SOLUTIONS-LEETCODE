class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string temp;
        for(auto x:words)temp+=x[0];
        return temp==s;
    }
};