class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int ind=0;
        for(int i=0;i<s.size();i++)
        {
            if(ind <spaces.size() and i==spaces[ind])
            {
                ans+=" ";
                ans+=s[i];
                ind++;
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
        
    }
};