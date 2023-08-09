class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()<2 and s1[0]!=s2[0])return false;
        int count=0,last=-1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
                if(count>1)
                {
                    if(s1[last]!=s2[i] or s2[last]!=s1[i] or count>2)return false;
                }
                last=i;
            }
        }
        return count!=1;
    }
};