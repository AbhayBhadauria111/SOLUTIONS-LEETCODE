class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>temp(26,0);
        for(auto x:s)temp[x-'a']++;
        for(auto x:t)temp[x-'a']--;
        for(int i=0;i<26;i++)if(temp[i])return char(i+'a');
        return -1;
    }
};