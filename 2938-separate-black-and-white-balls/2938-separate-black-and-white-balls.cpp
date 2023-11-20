class Solution {
public:
    long long minimumSteps(string s) {
        int last=s.size()-1;
        long long count=0;
        for(int i=s.size()-1;i>-1;i--)
        {
            if(s[i]=='1')
            {
                count+=last-i;
                last--;
            }
        }
        return count;
    }
};