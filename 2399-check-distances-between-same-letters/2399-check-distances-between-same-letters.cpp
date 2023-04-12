class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>last(26,-1);
        for(int i=0;i<s.size();i++)
        {
            int c=s[i]-'a';
            if(last[c]==-1 or i-last[c]-1==distance[c])
            {
                last[c]=i;
            }
            else return false;
        }
        return true;
    }
};