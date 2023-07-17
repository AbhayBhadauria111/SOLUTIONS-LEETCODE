class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>A(numRows);
        int j=0,step=1;
        if(numRows==1)return s;
        for(int i=0;i<s.size();i++)
        {
            if(j==0)step=1;
            if(j==numRows-1)step=-1;
            A[j]+=s[i];
            j+=step;
        }
        string ans;
        for(auto x:A)ans+=x;
        return ans;
    }
};