class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        for(int mid=0;mid<s.size();mid++)
        {
            int i=mid,j=mid;
            while(i>-1 and j<s.size() and s[i]==s[j])
            {
                i--;j++;
            }
            if(j-i-1>ans.size())ans=s.substr(i+1,j-i-1);
            i=mid,j=mid+1;
            while(i>-1 and j<s.size() and s[i]==s[j])
            {
                i--;j++;
            }
            if(j-i-1>ans.size())ans=s.substr(i+1,j-i-1);
        }
        // 012345
        // abbbcc
        return ans;
    }
};